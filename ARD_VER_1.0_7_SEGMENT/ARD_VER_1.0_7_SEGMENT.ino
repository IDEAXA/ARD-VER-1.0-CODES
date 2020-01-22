const int A=9; // 7 segment driver cd4511 pins 
const int B=10;
const int C=11;
const int D=12;
void setup() {
  pinMode(A, OUTPUT); //LSB
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT); //MSB
}

void loop() 
{
digitalWrite(D, LOW); // 0 digit
digitalWrite(C, LOW);
digitalWrite(B, LOW);
digitalWrite(A, LOW);
delay(1000);
digitalWrite(D, LOW); // 1 digit
digitalWrite(C, LOW);
digitalWrite(B, LOW);
digitalWrite(A, HIGH);
delay(1000);
digitalWrite(D, LOW); // 2 digit
digitalWrite(C, LOW);
digitalWrite(B, HIGH);
digitalWrite(A, LOW);
delay(1000);
digitalWrite(D, LOW); // 3 digit
digitalWrite(C, LOW);
digitalWrite(B, HIGH);
digitalWrite(A, HIGH);
delay(1000);
digitalWrite(D, LOW);   // 4 digit
digitalWrite(C, HIGH);
digitalWrite(B, LOW);
digitalWrite(A, LOW);
delay(1000);
digitalWrite(D, LOW);   // 5 digit
digitalWrite(C, HIGH);
digitalWrite(B, LOW);
digitalWrite(A, HIGH);
delay(1000);
digitalWrite(D, LOW);   // 6 digit
digitalWrite(C, HIGH);
digitalWrite(B, HIGH);
digitalWrite(A, LOW);
delay(1000);
digitalWrite(D, LOW);   // 7 digit
digitalWrite(C, HIGH);
digitalWrite(B, HIGH);
digitalWrite(A, HIGH);
delay(1000);
digitalWrite(D, HIGH); // 8 digit
digitalWrite(C, LOW);
digitalWrite(B, LOW);
digitalWrite(A, LOW);
delay(1000);
digitalWrite(D, HIGH);  // 9 digit
digitalWrite(C, LOW);
digitalWrite(B, LOW);
digitalWrite(A, HIGH);
delay(1000);    
}
