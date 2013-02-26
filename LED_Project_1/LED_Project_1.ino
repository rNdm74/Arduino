
int sensorPin = A0;    // select the input pin for the potentiometer

int ledPins[] = {8, 9, 10, 11, 12}; // set pin for the LEDs

double sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
  // declare the ledPins as an OUTPUT:
  for( int ledPin = 0; ledPin < 5; ledPin++) {
    pinMode(ledPins[ledPin], OUTPUT);
  }
}

void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);  
  
  // set LED (HIGH/LOW) on value from sensorValue 
  for ( int ledPin = 0; ledPin < 5; ledPin++){
    (sensorValue < (1010 - (204.6 * ledPin))) ? digitalWrite(ledPins[ledPin], HIGH) : digitalWrite(ledPins[ledPin], LOW); 
  }
}
