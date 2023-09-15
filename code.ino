int sensor_pin = A0;
int output_value;
int threshold = 50;
void setup() {
  pinMode(4, OUTPUT);
  Serial.begin(9600);
  Serial.println("Reading from the sensor");
  delay(1000);
}

void loop() {
  output_value = analogRead(sensor_pin);
  // map(value, fromLow, fromHigh, toLow, toHigh)
  output_value = map(output_value, 0, 1023, 0, 100);
  Serial.print(output_value);
  Serial.print("%");
  
  if (output_value < threshold) {
    
    // You might want to change it to a specific threshold value.
  } else {
    digitalWrite(4, LOW);
  }

  // Add a delay to control the speed of the loop.
  delay(1000); // Adjust the delay time as needed.
}
