
const int buttonPin1 = 5;     // the number of the pushbutton pin 5
const int buttonPin2 = 6;     // the number of the pushbutton pin 6
const int buttonPin3 = 7;     // the number of the pushbutton pin 7
const int buttonPin4 = 8;     // the number of the pushbutton pin 8

int buttonState1 = 0;         // variable for reading the pushbutton on pin 5
int buttonState2 = 0;         // variable for reading the pushbutton on pin 6
int buttonState3 = 0;         // variable for reading the pushbutton on pin 7
int buttonState4 = 0;         // variable for reading the pushbutton on pin 8
void setup() {
  // initialize the pushbuttons pin as an input:
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
  pinMode(buttonPin4, INPUT);
  Serial.begin(9600); // init serial for print button data
}

void loop() {
  // read the state of the pushbutton value:
  buttonState1 = digitalRead(buttonPin1);
  buttonState2= digitalRead(buttonPin2);
  buttonState3 = digitalRead(buttonPin3);
  buttonState4 = digitalRead(buttonPin4);

  // when we press button state go high 
  if (buttonState1 == HIGH) 
  {
    Serial.println("BUTTON 1 PRESSED");
    delay(100);
  } 
  if (buttonState2 == HIGH) 
  {
    Serial.println("BUTTON 2 PRESSED");
    delay(100);
  } 
  if (buttonState3 == HIGH) 
  {
    Serial.println("BUTTON 3 PRESSED");
    delay(100);
  } 
  if (buttonState4 == HIGH) 
  {
    Serial.println("BUTTON 4 PRESSED");
    delay(100);
  } 
  else {
    // do nothing
  }
}
