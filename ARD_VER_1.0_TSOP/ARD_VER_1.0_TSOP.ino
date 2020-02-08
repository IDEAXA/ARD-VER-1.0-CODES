// this example is for read the value of each button IR code by tsop1838
#include <IRremote.h> // install library for IR TSOP 1838 
int RECV_PIN = 3;  // our board has TSOP connected on pin 3
IRrecv irrecv(RECV_PIN); // object of IRremote class
decode_results results; 
void setup() {
  Serial.begin(9600);
  irrecv.enableIRIn();// enabling the IR pin 
}
void loop() {
  if (irrecv.decode(&results)) {
    Serial.println(results.value, HEX);
    irrecv.resume();
  }
  delay(100);
}  
