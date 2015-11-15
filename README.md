# Temperature controlled relay with Arduino

Simple solution if you need to use heater which does not have good
temperature sensor.

Steps:
 1. Grab any relay control circuit from the Net, I used this one for reference:
    http://www.instructables.com/id/Arduino-Christmas-Light-Controller/?ALLSTEPS
    (thx dany32412), when selecting the relay pay attention to control current 
    and max  controlled circuit current. 
 2. Get Dallas DS18B20 (or similar) and connect it according to
    diagram in here: http://www.hobbytronics.co.uk/ds18b20-arduino
 3. Choose power source according to relay control current.
 4. Boot your solder station, spend some good time with it ..
 5. Modify and "burn" the .ino.

Features:
 - fluctiation prevention with transformation delay.
 - relay indicator using built in LED.


November 2015 in Tallinn
zyxtarmo at suvaline dot net
