int relayPin1 = 7;                 // IN1 connected to digital pin 7
int relayPin2 = 8;                 // IN2 connected to digital pin 8
int relayPin3 = 9;                 // IN3 connected to digital pin 9
int relayPin4 = 10;                // IN4 connected to digital pin 10

int relayPin5 = 6;                // IN4 connected to digital pin 10
int relayPin6 = 5;                // IN4 connected to digital pin 10
int relayPin7 = 4;                // IN4 connected to digital pin 10
int relayPin8 = 3;                // IN4 connected to digital pin 10

void setup()
{
  pinMode(relayPin1, OUTPUT);      // sets the digital pin as output
  pinMode(relayPin2, OUTPUT);      // sets the digital pin as output
  pinMode(relayPin3, OUTPUT);      // sets the digital pin as output
  pinMode(relayPin4, OUTPUT);      // sets the digital pin as output
  pinMode(relayPin5, OUTPUT);      // sets the digital pin as output
  pinMode(relayPin6, OUTPUT);      // sets the digital pin as output
  pinMode(relayPin7, OUTPUT);      // sets the digital pin as output
  pinMode(relayPin8, OUTPUT);      // sets the digital pin as output
  digitalWrite(relayPin1, HIGH);        // Prevents relays from starting up engaged
  digitalWrite(relayPin2, HIGH);        // Prevents relays from starting up engaged
  digitalWrite(relayPin3, HIGH);        // Prevents relays from starting up engaged
  digitalWrite(relayPin4, HIGH);        // Prevents relays from starting up engaged
  digitalWrite(relayPin5, HIGH);        // Prevents relays from starting up engaged
  digitalWrite(relayPin6, HIGH);        // Prevents relays from starting up engaged
  digitalWrite(relayPin7, HIGH);        // Prevents relays from starting up engaged
  digitalWrite(relayPin8, HIGH);        // Prevents relays from starting up engaged
}

void loop()
{
  digitalWrite(relayPin1, LOW);   // energizes the relay and lights the LED
  digitalWrite(relayPin2, LOW);   // energizes the relay and lights the LED
  digitalWrite(relayPin3, LOW);   // energizes the relay and lights the LED
  digitalWrite(relayPin4, LOW);   // energizes the relay and lights the LED
  digitalWrite(relayPin5, LOW);   // energizes the relay and lights the LED
  digitalWrite(relayPin6, LOW);   // energizes the relay and lights the LED
  digitalWrite(relayPin7, LOW);   // energizes the relay and lights the LED
  digitalWrite(relayPin8, LOW);   // energizes the relay and lights the LED
  delay(5000);                  // waits for a second
  digitalWrite(relayPin1, HIGH);    // de-energizes the relay and LED is off
  digitalWrite(relayPin2, HIGH);    // de-energizes the relay and LED is off
  digitalWrite(relayPin3, HIGH);    // de-energizes the relay and LED is off
  digitalWrite(relayPin4, HIGH);    // de-energizes the relay and LED is off
  digitalWrite(relayPin5, HIGH);    // de-energizes the relay and LED is off
  digitalWrite(relayPin6, HIGH);    // de-energizes the relay and LED is off
  digitalWrite(relayPin7, HIGH);    // de-energizes the relay and LED is off
  digitalWrite(relayPin8, HIGH);    // de-energizes the relay and LED is off
  delay(5000);                  // waits for a second
} 
