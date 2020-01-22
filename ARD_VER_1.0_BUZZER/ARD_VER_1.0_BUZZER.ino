#define BUZZER 2       // define BUZZER (our board has BUZZER connected on 2 pin)
void setup() // setup loop for initialize all the devices (only one time)
{
  pinMode(BUZZER, OUTPUT); // making BUZZER as a output device
}

void loop() // main loop for main working task (Run again and again)
{
  digitalWrite(BUZZER, HIGH); // Turn on the BUZZER
  delay(1000);             // Delay for 1 sec
  digitalWrite(BUZZER, LOW);  // Turn off the BUZZER
  delay(1000);             // Delay for 1 sec
}
