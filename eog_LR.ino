void setup() {
  Serial.begin(115200);
}

void loop() {
  int sensor1 = analogRead(A0); // Read the sensor value

  // Define thresholds for left, neutral, and right
  int leftThreshold = 600;  // Adjust this based on observed values
  int rightThreshold = 400; // Adjust this based on observed values

  if (sensor1 > leftThreshold) {
    Serial.println("left"); // Sensor value indicates "left"
  } else if (sensor1 < rightThreshold) {
    Serial.println("right"); // Sensor value indicates "right"
  } else {
    Serial.println("neutral"); // Sensor value is in the "neutral" range
  }

  delay(500); // Delay for stability
}
