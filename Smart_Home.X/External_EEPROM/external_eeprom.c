#include <builtins.h>

#include "external_eeprom.h"

void eeprom_24C01C_write_byte(i2c_address_t eeprom_id,i2c_address_t byte_address,uint8_t data){
    I2C_Write1ByteRegister(eeprom_id,byte_address,data);
    __delay_us(100);
}

uint8_t eeprom_24C01C_read_byte(i2c_address_t eeprom_id,i2c_address_t byte_address){
   return I2C_Read1ByteRegister(eeprom_id,byte_address);
}

