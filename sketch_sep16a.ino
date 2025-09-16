/*
  Button

  Turns on and off a light emitting diode(LED) connected to digital pin 13,
  when pressing a pushbutton attached to pin 2.

  The circuit:
  - LED attached from pin 13 to ground through 220 ohm resistor
  - pushbutton attached to pin 2 from +5V
  - 10K resistor attached to pin 2 from ground

  - Note: on most Arduinos there is already an LED on the board
    attached to pin 13.

  created 2005
  by DojoDave <http://www.0j0.org>
  modified 30 Aug 2011
  by Tom Igoe

  This example code is in the public domain.

  https://docs.arduino.cc/built-in-examples/digital/Button/
*/

// constants won't change. They're used here to set pin numbers:
const int buttonPin = 2;  // the number of the pushbutton pin
const int greenPin = 5;    // the number of the LED pin
const int yellowPin = 6;
const int redPin = 7;

// variables will change:
int buttonState = 0;  // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  
  // initialize the pushbutton pin as an input:
  pinMode(greenPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(redPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // set to low, if you hold the button down, the green light will stay.
  if (buttonState == LOW) {
    // turn LED on:
    digitalWrite(5, HIGH);
    delay (7000);
  } else {
    // turn LED off:
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
  }
  //runs the light sequence
  digitalWrite(5, HIGH);
  delay (2000);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  delay (2000);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  delay (2000);
  digitalWrite(7, LOW);

  
}
