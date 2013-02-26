/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int blue = 13;
int red = 12;
int green = 11;

int time = 250;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);  
}

// the loop routine runs over and over again forever:
void loop() {
  flash(blue);
  flash(red);
  flash(green);
}

void flash(int rgb){  
    digitalWrite(rgb, HIGH); 
    delay(time);
    digitalWrite(rgb, LOW);
    delay(time); 
}
