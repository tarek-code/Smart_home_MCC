/* 
 * File:   external_eeprom.h
 * Author: Unlimited
 *
 * Created on August 29, 2023, 2:52 AM
 */

#ifndef EXTERNAL_EEPROM_H
#define	EXTERNAL_EEPROM_H

#include "../mcc_generated_files/examples/i2c_master_example.h"
#include "../mcc_generated_files/mcc.h"

void eeprom_24C01C_write_byte(i2c_address_t eeprom_id,i2c_address_t byte_address,uint8_t data);
uint8_t eeprom_24C01C_read_byte(i2c_address_t eeprom_id,i2c_address_t byte_address);
#endif	/* EXTERNAL_EEPROM_H */

