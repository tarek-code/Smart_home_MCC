/* 
 * File:   Temp_sensor_TC74.h
 * Author: Unlimited
 *
 * Created on August 29, 2023, 8:51 PM
 */

#ifndef TEMP_SENSOR_TC74_H
#define	TEMP_SENSOR_TC74_H

#include "../mcc_generated_files/mcc.h"

uint8_t Temp_sensor_TC74_Read(i2c_address_t address, uint8_t reg);

#endif	/* TEMP_SENSOR_TC74_H */

