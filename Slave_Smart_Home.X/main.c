

#include "mcc_generated_files/mcc.h"

/*
                         Main application
 */
uint8_t data_slave_read=0;
volatile uint8_t  val=0;
void slave_reading(){
    val++;
    data_slave_read= SSPBUF;
}
void main(void)
{
    // Initialize the device
    SYSTEM_Initialize();
    I2C_Open();
I2C_SlaveSetReadIntHandler(slave_reading);
    // Enable the Global Interrupts
    INTERRUPT_GlobalInterruptEnable();


    // Enable the Peripheral Interrupts
    INTERRUPT_PeripheralInterruptEnable();


    while (1)
    {
        if(data_slave_read>35){
            MOTOR_SetHigh();
        }
        else{
            MOTOR_SetLow();
        }
    }
}
