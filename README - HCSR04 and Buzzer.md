# SIT210-Project

HC SR04 and Buzzer Code

Download the program labelled: HC SR04 and Buzzer Code.py

Locate Thonny IDE.
It is found through: Home (Top Left Icon) -> Programming -> Thonny Python IDE.

Open Thonny IDE then open open the file which you have just downloaded. (HC SR04 and Buzzer Code.py)
>This can be done by clicking on the OPEN button at the top of the program and searching for the program.

After it is open, then click the Run button at the top. Then the code should run.

Check the bottom panel of the program, this is the console. It will show what is happening.
If Distance is displayed the code is running correctly.

>What should happen:
The code should be running the GPIO pins for the echo and trig pins of the HC SR04 sensor. This in turn will lead to the code calculating the results from the sensor and displaying the distance from the item/object it is hitting and returning from. Such as a book which is 10cm away would be calculated from the results and produce a similar result.

The console should show: Distance XXcm
                         Distance XXcm
                         
As for the Buzzer, it works when the HC SR04 sensor returns a result that is below 10cm. The buzzer will go off for 0.5 seconds and stop right after that.
