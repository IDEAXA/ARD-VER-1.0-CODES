int sensorPin = A0;    // select the input pin for the LIGHT SENSOR
int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
  // declare the Serial for print data
  Serial.begin(9600);
}

void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);// print the data from light sensor.
  delay(100);
}
