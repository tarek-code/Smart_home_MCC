

#include "mcc_generated_files/mcc.h"



/*
                         Main application
 */
rtc_get_value_t reading;
uint8_t data_1=0;
uint8_t data_2=0;
uint8_t temp_reading=0;
void main(void)
{
    // Initialize the device
    SYSTEM_Initialize();


    // Enable the Global Interrupts
   INTERRUPT_GlobalInterruptEnable();


    // Enable the Peripheral Interrupts
    INTERRUPT_PeripheralInterruptEnable();

eeprom_24C01C_write_byte(EEPROM_1_ADDRESS,0x08,5);
eeprom_24C01C_write_byte(EEPROM_2_ADDRESS,0x08,6);
data_1=eeprom_24C01C_read_byte(EEPROM_1_ADDRESS,0x08);
data_2=eeprom_24C01C_read_byte(EEPROM_2_ADDRESS,0x08);


     
      // I2C_Write1ByteRegister(56,0x00,5);
    while (1)
    {
      //  temp_reading= Temp_sensor_TC74_Read(TEMP_TC74_ADDRESS,TEMP_TC74_REG);
      temp_reading= Temp_sensor_TC74_Read(TEMP_TC74_ADDRESS,TEMP_TC74_REG);
       
      I2C_Write1ByteRegister(0x28,0x00,temp_reading);
      
      reading =rtc_get_value(104);
       
      print_rtc_data_time(&reading);
       __delay_ms(500);
  
         //Add your application code
    }
}
