# SIT210-Project

Particle IDE with Raspberry Pi and LED Control

Before using the code, the raspberry pi needs to be claimed to the Particle Cloud.
To setup the raspberry pi as a particle device you need to setup the device in the cloud through a command on the Raspberry Pi console.
Open the console and enter the following code:

bash <( curl -sL https://particle.io/install-pi )

After installing follow the steps it says and it will be setup as a particle device.

Now for the code:

Move over to the particle IDE website. Change the focus of the devices to the raspberry pi.
Create a new app just like the DHT22 code. (This is done by clicking on the CREATE NEW APP button on the code tab of the IDE)

Download the program labelled: raspberrypi-led-control.ino

Once downloaded open the file with notepad or notepad++ or any code IDE program. 
Copy the contents and paste it over the entire code in the web IDE for particle.
Title the program as with any name.
Make sure the device is selected. Then compile the program. Then flash it. 

Then wait awhile for the LEDs to turn on.

After the LEDs do not turn on check if the argon is publishing events and further testing might be need with the connections. 
Go back and go through the steps of the manual to double check cables and sensor connections.

>What should happen:

The code is very dependant on the publish events of the Particle Argon and the DHT22. The code takes the publish events of:
Cold, Cool, Ideal, Warm, Hot. From the particle cloud.

This is done through the particle.subscribe events. Specific LEDs would turn on when they recieve the event.
For example if the Particle Argon published a 'ideal' event it would make the Raspberry Pi activate the green LED and keep it on.
This is until an event different to 'ideal' would make it change, such as 'cool' event would turn on the blue LED.
