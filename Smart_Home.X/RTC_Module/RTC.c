#include "RTC.h"


rtc_get_value_t rtc_get_value(uint8_t adress){
    
  rtc_get_value_t rtc_get_value_local={0}; 
  rtc_get_value_local.Seconds= I2C_Read1ByteRegister(adress,0x00);
  (rtc_get_value_local.Seconds) &=127;
  rtc_get_value_local.Minutes= I2C_Read1ByteRegister(adress,0x01);
(rtc_get_value_local.Minutes) &=127;  
  rtc_get_value_local.Houres= I2C_Read1ByteRegister(adress,0x02);
  (rtc_get_value_local.Houres) &=127;
  rtc_get_value_local.Day= I2C_Read1ByteRegister(adress,0x03);
  (rtc_get_value_local.Day) &=7;
  rtc_get_value_local.Date= I2C_Read1ByteRegister(adress,0x04);
  (rtc_get_value_local.Date) &=63;
  rtc_get_value_local.Month= I2C_Read1ByteRegister(adress,0x05);
  (rtc_get_value_local.Month) &=31;
  rtc_get_value_local.Year= I2C_Read1ByteRegister(adress,0x06);
  return rtc_get_value_local;
}
