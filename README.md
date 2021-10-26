# U6143_ssd1306
## Enable i2c 
```bash
sudo raspi-config
```
Choose Interface Options 
Enable i2c

##  Download library 
```bash
git clone git@github.com:stoopfrench/raspi-lcd.git
```
## Compile the source code 
```bash
cd raspi-lcd
```
```bash
sudo make clean && sudo make
```

## Run the display

```bash 
cd raspi-lcd
```
```bash 
./display 
```



