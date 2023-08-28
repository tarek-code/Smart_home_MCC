#include "print_rtc.h"
static char bufferWrite[50];
void print_rtc_data_time(const rtc_get_value_t *ptr){
    if(NULL!=ptr){
     sprintf(bufferWrite, "time : %x:%x:%x \rDate : %x:%x:%x",ptr->Seconds, ptr->Minutes, ptr->Houres,ptr->Date,ptr->Month,ptr->Year );
     EUSART_Write_string(bufferWrite);
    }
}
