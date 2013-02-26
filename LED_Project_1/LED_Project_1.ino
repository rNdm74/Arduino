
int sensorPin = A0;    // select the input pin for the potentiometer

int led1Pin = 13;      // select the pin for the LED
int led2Pin = 12;      // select the pin for the LED
int led3Pin = 11;      // select the pin for the LED
int led4Pin = 10;      // select the pin for the LED
int led5Pin = 9;      // select the pin for the LED

double sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(led1Pin, OUTPUT); 
  pinMode(led2Pin, OUTPUT); 
  pinMode(led3Pin, OUTPUT); 
  pinMode(led4Pin, OUTPUT);
  pinMode(led5Pin, OUTPUT);  
}

void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);  
  
  (sensorValue < 1010) ? digitalWrite(led5Pin, HIGH) : digitalWrite(led5Pin, LOW);  
  (sensorValue <= (818.4)) ? digitalWrite(led1Pin, HIGH) : digitalWrite(led1Pin, LOW);
  (sensorValue <= (613.8)) ? digitalWrite(led2Pin, HIGH) : digitalWrite(led2Pin, LOW);
  (sensorValue <= (409.2)) ? digitalWrite(led3Pin, HIGH) : digitalWrite(led3Pin, LOW);
  (sensorValue <= (204.6)) ? digitalWrite(led4Pin, HIGH) : digitalWrite(led4Pin, LOW);
}
