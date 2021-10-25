/******
Demo for ssd1306 i2c driver for  Raspberry Pi 
******/
#include <stdio.h>
#include "ssd1306_i2c.h"
#include "time.h"
#include <unistd.h>



int main(void) 
{
    ssd1306_begin(SSD1306_SWITCHCAPVCC, SSD1306_I2C_ADDRESS);      //LCD Screen initialization
    if(i2cd<0)
    {
        printf("I2C device failed to open\r\n");
        return 0;
    }
    usleep(150*1000);                                                  //Short delay Ensure the normal response of the lower function
    LCD_DisplayHostName("MqttPi");
    while(1)
    {
    sleep(5);
    LCD_DisplayCpuMemory();
    }
    return 0;
}
