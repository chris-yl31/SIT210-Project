#include <Adafruit_DHT.h>

    #define DHTPIN D2

    #define DHTTYPE DHT22

    DHT dht(DHTPIN, DHTTYPE);


void setup() 
{
	Serial.begin(9600);
    dht.begin();
}

void loop(){

        delay(2000);
        
        float tempf = dht.getTempFarenheit();
        
        float tempc = ((tempf-32)/1.8);
        
        Particle.publish("room_temp", String(tempc), PRIVATE);
        
        if (tempc < 17)
        {
            Particle.publish("cold_temp", String(tempc), PRIVATE);
        }
        
        if (tempc >= 17 && tempc < 20)
        {
            Particle.publish("cool_temp", String(tempc), PRIVATE);
        }
        
        if (tempc >= 20 && tempc <=22)
        {
            Particle.publish("ideal_temp", String(tempc), PRIVATE);
        }
        
        if (tempc > 22 && tempc <=25)
        {
            Particle.publish("warm_temp", String(tempc), PRIVATE);
        }
        
        if (tempc > 25)
        {
            Particle.publish("hot_temp", String(tempc), PRIVATE);
        }

    delay(30000);
}