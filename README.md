# Arduino-LCD20x4-i2c
LCD 20x4 with Arduino and i2c Interface


This project helps you to print simple text and numbers on a 20x4 LCD display connected to an Arduino 
with an i2c interface which allows for easier connection between Arduino and the LCD module.

Features
* Print Text and numbers
* Inbuilt potentiometer on the i2c board allows you to control the brightness of the display.
* Easy 4 wire connection

Parts 
* Arduino UNO (could be any arduino board ie, mega, nano etc. Make sure to select the right board in the arduino IDE )
* 20x4 LCD display (could be of any resolution as long as it has the ability to be connected with i2c module)
* Arduino compatible i2c Board
* Jumper Wire for connection


Prerequisite (Software)
* Arduino IDE
* LiquidCrystal Library (give as zip file)


Step 1- Getting the i2c address
While working with i2c devices we first need to find their i2c address which allows us to communicate 
with the i2c interface. For example mine had 0x3F as the address.
Remember this address as this will be needed in the second code. Another famous i2c address is 0x27 so chances are yours will be either of two..
1. Connect the i2c board to the LCD as shown in the image given.
2. Follow the connection given in the circuit diagram between i2c Board and Arduino
   1. VCC => 5V
   2. GND => GND
   3. SDA => A4
   4. SCL => A5
3. Connect your Arduino board to your computer with the appropriate cable.
4. Past the first code (LCD_ADDRESS.ino) in the Arduino IDE.
5. Go to the Tools => Board and select your particular board
6. In the Tools section also select the COM port in which you have connected your arduino board 
   (If you are using a genuine Arduino board then it will show your arduino board right beside the COM port number ).
7. If you are still unable to determine your COM port then right click on the home button (windows) and open device manager. 
   In device manager expand the ports section and from there you’ll be able to determine your COM port.
8. After selecting the right COM and Arduino Board upload the code to the Arduino board.
9. When you see “Done Uploading” on the top of the terminal, goto Tools and select the serial monitor.
10.  After few seconds this should be displayed
 Found Address
 0x3F
 Note down the address for future reference


Step 2- Printing Text on the DIsplay


1. Past the second code (lcd_main.ino) in the IDE
2. To change the text to be displayed on the screen, refer to the instruction given in the code itself.
3. Select the right COM and Arduino board (same as before) and upload the code.
4. If your text is not properly displayed on the LCD display, try turning the potentiometer on the i2c board to increase the brightness of the display.


Step 3- Enjoy
Now you can have your Name, number etc printed on the LCD display
You can also run the code in the loop{} to change the text being printed on the display as desired.


Video Instruction
Refer to this video for full tutorial:-
https://www.youtube.com/watch?v=Wbg44g9wNdU&feature=youtu.be
