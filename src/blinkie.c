#define RELAYS 8
#define DELAY 2000

int relays[RELAYS]={3,4,5,6,7,8,9,10};

void setup()
{
  for(pin=0; pin<RELAYS; pin++) {
    pinMode(pin, OUTPUT);
  }
}

void loop()
{
  delay(DELAY);
  for(pin=0; pin<RELAYS; pin++) {
    digitalWrite(pin, HIGH);
  }
  delay(DELAY);
  for(pin=0; pin<RELAYS; pin++) {
    digitalWrite(pin, LOW);
  }
  for(pin=0; pin<RELAYS; pin++) {
    delay(DELAY);
    digitalWrite(pin, HIGH);
  }
  for(pin=0; pin<RELAYS; pin++) {
    delay(DELAY);
    digitalWrite(pin, LOW);
  }
} 
