int hot_led = SDA;
int warm_led = SCL;
int ideal_led = D0;
int cool_led = TX;
int cold_led = RX;


bool cold_used;
bool cool_used;
bool ideal_used;
bool warm_used;
bool hot_used;


void setup() {
    
  // Setup GPIO
    pinMode(hot_led,OUTPUT);
    pinMode(warm_led,OUTPUT);
    pinMode(ideal_led,OUTPUT);
    pinMode(cool_led,OUTPUT);
    pinMode(cold_led,OUTPUT);
  
    digitalWrite(hot_led,LOW);
    digitalWrite(warm_led,LOW);
    digitalWrite(ideal_led,LOW);
    digitalWrite(cool_led,LOW);
    digitalWrite(cold_led,LOW);
  
    Particle.subscribe("cold_temp", cold, MY_DEVICES);
    Particle.subscribe("cool_temp", cool, MY_DEVICES);
    Particle.subscribe("ideal_temp", ideal, MY_DEVICES);
    Particle.subscribe("warm_temp", warm, MY_DEVICES);
    Particle.subscribe("hot_temp", hot, MY_DEVICES);
    
    cold_used = false;
    cool_used = false;
    ideal_used = false;
    warm_used = false;
    hot_used = false;
}


void loop() {

}

void cold(const char *event, const char *data)
{
    if (cold_used == false)
    {
        cold_used = true;
        cool_used = false;
        ideal_used = false;
        warm_used = false;
        hot_used = false;
        
        digitalWrite(cold_led,HIGH);
        digitalWrite(cool_led,HIGH);
        digitalWrite(ideal_led,LOW);
        digitalWrite(warm_led,LOW);
        digitalWrite(hot_led,LOW);
    }
    
}

void cool(const char *event, const char *data)
{
    if (cool_used == false)
    {
        cold_used = false;
        cool_used = true;
        ideal_used = false;
        warm_used = false;
        hot_used = false;
        
        digitalWrite(cold_led,LOW);
        digitalWrite(cool_led,HIGH);
        digitalWrite(ideal_led,LOW);
        digitalWrite(warm_led,LOW);
        digitalWrite(hot_led,LOW);
    }
    
}

void ideal(const char *event, const char *data)
{
    if (ideal_used == false)
    {
        cold_used = false;
        cool_used = false;
        ideal_used = true;
        warm_used = false;
        hot_used = false;
        
        digitalWrite(cold_led,LOW);
        digitalWrite(cool_led,LOW);
        digitalWrite(ideal_led,HIGH);
        digitalWrite(warm_led,LOW);
        digitalWrite(hot_led,LOW);
    }
    
}

void warm(const char *event, const char *data)
{
    if (warm_used == false)
    {
        cold_used = false;
        cool_used = false;
        ideal_used = false;
        warm_used = true;
        hot_used = false;
        
        digitalWrite(cold_led,LOW);
        digitalWrite(cool_led,LOW);
        digitalWrite(ideal_led,LOW);
        digitalWrite(warm_led,HIGH);
        digitalWrite(hot_led,LOW);
    }
    
}

void hot(const char *event, const char *data)
{
    if (hot_used == false)
    {
        cold_used = false;
        cool_used = false;
        ideal_used = false;
        warm_used = false;
        hot_used = true;
        
        digitalWrite(cold_led,LOW);
        digitalWrite(cool_led,LOW);
        digitalWrite(ideal_led,LOW);
        digitalWrite(warm_led,HIGH);
        digitalWrite(hot_led,HIGH);
    }
    
}