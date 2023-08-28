/* 
 * File:   RTC.h
 * Author: Unlimited
 *
 * Created on August 28, 2023, 2:50 AM
 */

#ifndef RTC_H
#define	RTC_H

#include "../mcc_generated_files/examples/i2c_master_example.h"

typedef struct{
    uint8_t Seconds;
    uint8_t Minutes;
    uint8_t Houres;
    uint8_t Day;
    uint8_t Month;
    uint8_t Year;
    uint8_t Date;
    
}rtc_get_value_t;

rtc_get_value_t rtc_get_value(uint8_t adress);
#endif	/* RTC_H */

