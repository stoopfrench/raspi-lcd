#include <stdio.h>
#include "ssd1306_i2c.h"
#include "time.h"
#include <unistd.h>

int main(void) 
{
    ssd1306_begin(SSD1306_SWITCHCAPVCC, SSD1306_I2C_ADDRESS);
    if(i2cd<0)
    {
        printf("I2C device failed to open\r\n");
        return 0;
    }
    usleep(150*1000);  //Short delay Ensure the normal response of the lower function
    LCD_DisplayHostName();
    while(1)
    {
    LCD_DisplayCpuMemory();
    sleep(5);
    }
    return 0;
}
