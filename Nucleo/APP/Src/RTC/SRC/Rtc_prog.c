/*
 * Rtc_prog.c
 *
 * Created: 28/8/2022 8:25:11 PM
 *  Author: Khooly
 */ 

#include "I2C/INC/i2c_driver.h"

#include "RTC/INC/Rtc_Private.h"
#include "RTC/INC/Rtc_Interface.h"

void RTC_Init(void)
{
	/* I2C must be configured in standard speed mode, ACK must be enabled and SCL/SDA must be open drain pulled up */
	I2C_Init();
	/* Try to comment this delay and see the response */
	_delay_ms(500);
	/* clock is halted (by default CH = 1) (CH bit must be set zero) */
	RTC_Write(0, RTC_ADDR_SEC);
	return;
}

void RTC_Set_Current_Time(RTC_Time_t * Copy_RTC_Time)
{
	uint8_t Local_u8Seconds = Binary_To_BCD(Copy_RTC_Time->seconds);
	uint8_t Local_u8Minutes = Binary_To_BCD(Copy_RTC_Time->minuts);
	uint8_t Local_u8Hours   = Binary_To_BCD(Copy_RTC_Time->hours);
	
	CLEAR_BIT(Local_u8Seconds,7); // make the CH bit = 0 clock is working
	
	RTC_Write(Local_u8Seconds, RTC_ADDR_SEC);
	RTC_Write(Local_u8Minutes, RTC_ADDR_MIN);
	
	if (Copy_RTC_Time->time_format == TIME_FORMAT_24_HRS)
	{
		CLEAR_BIT(Local_u8Hours,6);
	} 
	else
	{
		SetBit(Local_u8Hours,6);
		Local_u8Hours = (Copy_RTC_Time->time_format == TIME_FORMAT_12_HRS_PM) ? Local_u8Hours | (1 << 5) : Local_u8Hours & ~(1 << 5);
	}
	
	RTC_Write(Local_u8Hours, RTC_ADDR_HRS); 
	
	return;
}

void RTC_Get_Current_Time(RTC_Time_t * Copy_RTC_Time)
{
	uint8_t Local_u8Seconds = 0;
	uint8_t Local_u8Hours   = 0;
	
	Local_u8Seconds = RTC_Read(RTC_ADDR_SEC);
	
	CLEAR_BIT(Local_u8Seconds, 7);
	
	Copy_RTC_Time->seconds  = BCD_To_Binary(Local_u8Seconds);
	Copy_RTC_Time->minuts	= BCD_To_Binary(RTC_Read(RTC_ADDR_MIN));
	
	Local_u8Hours = RTC_Read(RTC_ADDR_HRS);
	
	if (GetBit(Local_u8Hours,6))
	{
		// 12 hr format
		Copy_RTC_Time->time_format = ! ( ( Local_u8Hours & (1<<5) )  == 0 ); // read AM,PM format
		Local_u8Hours &= ~(0x03 << 5); // clear bit 6 and 7
	} 
	else
	{
		//24 hr format
		Copy_RTC_Time->time_format = TIME_FORMAT_24_HRS;
	}
	
	Copy_RTC_Time->hours = BCD_To_Binary(Local_u8Hours);
	
	return;
}

void RTC_Set_Current_Date(RTC_Date_t * Copy_RTC_Date)
{
	RTC_Write(Binary_To_BCD(Copy_RTC_Date->date) , RTC_ADDR_DATE);
	RTC_Write(Binary_To_BCD(Copy_RTC_Date->month), RTC_ADDR_MONTH);
	RTC_Write(Binary_To_BCD(Copy_RTC_Date->year) , RTC_ADDR_YEAR);
	RTC_Write(Binary_To_BCD(Copy_RTC_Date->day)  , RTC_ADDR_DAY);
	return;
}

void RTC_Get_Current_Date(RTC_Date_t * Copy_RTC_Date)
{
	Copy_RTC_Date->day   = BCD_To_Binary(RTC_Read(RTC_ADDR_DAY));
	Copy_RTC_Date->date  = BCD_To_Binary(RTC_Read(RTC_ADDR_DATE));
	Copy_RTC_Date->month = BCD_To_Binary(RTC_Read(RTC_ADDR_MONTH));
	Copy_RTC_Date->year  = BCD_To_Binary(RTC_Read(RTC_ADDR_YEAR));
	return;
}


static void RTC_Write(uint8_t Copy_u8Value, uint8_t Copy_u8RegAddress)
{
	I2C_Start();											/* Start Condition */
	I2C_Write_Address(RTC_I2C_ADDRESS);						/* Send the Slave Address */
	I2C_Write_Data(Copy_u8RegAddress);						/* Send the RTC Register No. that you want to write to it */
	I2C_Write_Data(Copy_u8Value);							/* Send the Data to the refister that we sent in the previous line */
	I2C_Stop();												/* Send Stop Condition */	
	
	return;
}

static uint8_t RTC_Read(uint8_t Copy_u8RegAddress)
{
	uint8_t Read_Value = 0;
	I2C_Start();											/* Start Condition */
	I2C_Write_Address(RTC_I2C_ADDRESS);         		    /* Send the Slave Address */
	I2C_Write_Data(Copy_u8RegAddress);               	    /* Send the RTC Register No. that you want to point on */
	I2C_Repeated_Start();                               	/* Send Repeated Start */
	I2C_Read_Addresss(RTC_I2C_ADDRESS);    		        	/* Send the Slave Address again with R/W bit = R */
	Read_Value = I2C_Read_Data();							/* Read the Data from the Register previously set */
	I2C_Stop();												/* Send Stop Condition */
	
	return Read_Value;
}

static uint8_t Binary_To_BCD(uint8_t Copy_u8Value)
{
	uint8_t m , n , bcd;
	if (Copy_u8Value >= 10)
	{
		m = Copy_u8Value / 10;
		n = Copy_u8Value % 10;
		bcd = (uint8_t) (m << 4) | n;
	} 
	else
	{
		bcd = Copy_u8Value;
	}
	return bcd;
}

static uint8_t BCD_To_Binary(uint8_t Copy_u8Value)
{
	uint8_t m , n;
	m = (uint8_t) ((Copy_u8Value >> 4) * 10);
	n = Copy_u8Value & (uint8_t)0x0F;
	return (m + n);
}
