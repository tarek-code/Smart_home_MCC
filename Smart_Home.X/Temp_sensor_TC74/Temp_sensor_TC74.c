#include "Temp_sensor_TC74.h"

        
uint8_t Temp_sensor_TC74_Read(i2c_address_t address, uint8_t reg){
    return I2C_Read1ByteRegister(address,reg);
    
}