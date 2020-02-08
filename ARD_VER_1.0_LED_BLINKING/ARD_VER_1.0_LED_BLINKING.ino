#define LED 2       // define led (our board has LED connected on 13 pin)
void setup() // setup loop for initialize all the devices (only one time)
{
  pinMode(LED, OUTPUT); // making LED as a output device
}

void loop() // main loop for main working task (Run again and again)
{
  digitalWrite(LED, HIGH); // Turn on the LED
  delay(1000);             // Delay for 1 sec
  digitalWrite(LED, LOW);  // Turn off the LED
  delay(1000);             // Delay for 1 sec
}
