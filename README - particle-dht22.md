# SIT210-Project

Particle Argon Code

**NOTE: If you do not have a Particle Argon or related device, the code will not work. If you have not setup the particle device,
please go to this link to setup the device:
(for argon) https://docs.particle.io/quickstart/argon/
(any particle device) https://login.particle.io/signup?app=setup&redirect=http://setup.particle.io



Do this on a windows/mac/Linux based machine
Open the Particle IDE on Particle IoT website. 
https://www.particle.io/
Once open a new project by clicking on CREATE NEW APP.

Then download the program from the Github Repository.
>particle-dht22.ino

Once downloaded open the file with notepad or notepad++ or any code IDE program. 
Copy the contents and paste it over the entire code in the web IDE for particle.

Title the program as any name.

Then select the device via the devices menu, select the argon which you setup earlier.

Then compile the program.
Then flash it. Then move to the Particle Console to check for the publish events.
If the events are appearing, the sensor and particle device are working correctly.

>What should happen:

The code is using the Adafruit libraries for the DHT sensors, it would grab the information being collected by the DHT22 and then convert it.
The conversion is a standard conversion of farenheit to celcius. Then it would go through sets of code which are setup to publish a certain event.
These events are made to send a variable to the raspberry pi, it would send a cold, cool, ideal, warm, hot event to the particle cloud.
It would also publish a temp event for a webhook to thingspeak.com.
