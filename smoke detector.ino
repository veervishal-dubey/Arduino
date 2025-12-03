int threshold = 500;   // Threshold for sensor reading
int buzzPin = 2;       // Buzzer connected to pin 2

void setup() {
  Serial.begin(9600);
  pinMode(buzzPin, OUTPUT);  // Set buzzer pin as output
}

void loop() {
  int sensorReading = analogRead(A0);  // Read sensor value
  Serial.println(sensorReading);       // Print for debugging
  delay(1000);

  if (sensorReading > threshold) {
    // Play a 2000 Hz tone for 1 second
    tone(buzzPin, 2000, 1000);
    Serial.println(" Fire Detected! Alarm ON!");
  }
else 
{
    // Stop any tone
    noTone(buzzPin);
    Serial.println(" Safe. No fire detected.");
  }
}
