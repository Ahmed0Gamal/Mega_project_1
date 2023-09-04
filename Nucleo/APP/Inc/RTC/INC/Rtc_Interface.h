/*
 * Rtc_prog.c
 *
 * Created: 28/8/2022 8:24:06 PM
 *  Author: Khooly
 */ 


#ifndef RTC_INTERFACE_H_
#define RTC_INTERFACE_H_
/************************************** MACROS **************************************/
#define	AM							0
#define	PM							1

#define	TIME_FORMAT_12_HRS_AM		0
#define	TIME_FORMAT_12_HRS_PM		1
#define	TIME_FORMAT_24_HRS			2

#define SATURDAY					1;
#define SUNDAY						2;
#define MONDAY						3;
#define TUESDAY						4;
#define WEDNESDAY					5;
#define THURSDAY					6;
#define FRIDAY						7;
/***************************************************************************************/
/************************************ USER DEFINED *************************************/
typedef struct
{
	uint8_t date;
	uint8_t month;
	uint8_t year;
	uint8_t day;
}RTC_Date_t;

typedef struct
{
	uint8_t seconds;
	uint8_t minuts;
	uint8_t hours;
	uint8_t time_format;
}RTC_Time_t;
/***************************************************************************************/
/************************************* PROTOTYPES **************************************/
void RTC_Init(void);
void RTC_Set_Current_Time(RTC_Time_t * Copy_RTC_Time);
void RTC_Get_Current_Time(RTC_Time_t * Copy_RTC_Time);
void RTC_Set_Current_Date(RTC_Date_t * Copy_RTC_Date);
void RTC_Get_Current_Date(RTC_Date_t * Copy_RTC_Date);
/***************************************************************************************/
#endif /* RTC_INTERFACE_H_ */
