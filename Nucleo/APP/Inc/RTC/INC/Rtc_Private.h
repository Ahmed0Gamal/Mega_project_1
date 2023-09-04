/*
 * Rtc_prog.c
 *
 * Created: 28/8/2022 8:24:21 PM
 *  Author: Khooly
 */ 
 
#ifndef RTC_PRIVATE_H_
#define RTC_PRIVATE_H_
/************************************** MACROS **************************************/
#define	RTC_I2C_ADDRESS				0xD0
#define	RTC_ADDR_SEC				0x00
#define	RTC_ADDR_MIN				0x01
#define	RTC_ADDR_HRS				0x02
#define	RTC_ADDR_DAY				0x03
#define	RTC_ADDR_DATE				0x04
#define	RTC_ADDR_MONTH				0x05
#define	RTC_ADDR_YEAR				0x06
/***************************************************************************************/
/************************************* PROTOTYPES **************************************/
static void RTC_Write(uint8_t Copy_u8Value, uint8_t Copy_u8RegAddress);
static uint8_t	RTC_Read(uint8_t Copy_u8RegAddress);
static uint8_t	Binary_To_BCD(uint8_t Copy_u8Value);
static uint8_t	BCD_To_Binary(uint8_t Copy_u8Value);

/***************************************************************************************/
#endif /* RTC_PRIVATE_H_ */