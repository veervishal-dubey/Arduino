#include <Servo.h>
Servo myServo;

const int soilpin = A0;
const int moisture_min = 500;   // Adjust threshold after calibration
const int green = 13;
const int red = 12;

// Servo motor has 3 pins: Power that connects to 5V, Ground that connects to GND, Signal that connects to PWM DPIN
// Soil Moisture Sensor has 3 pins: Power that connects to 5V, Ground that connects to GND, Signal that connects to analog pin

void setup() {
  myServo.attach(9);
  myServo.write(0);             // Start with valve closed
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int moisture = analogRead(soilpin);

  Serial.print("Moisture Level: ");
  Serial.println(moisture);

  if (moisture < moisture_min) {
    digitalWrite(red, HIGH);
    digitalWrite(green, LOW);
    Serial.println("We need to water the plants.");

    // Open valve (servo to 90 degrees)
    myServo.write(90);
    delay(5000); // keep valve open for 5 seconds (adjust as needed)

    // Close valve
    myServo.write(0);
    Serial.println("Watering done, valve closed.");
  } else {
    digitalWrite(red, LOW);
    digitalWrite(green, HIGH);
    Serial.println("We don't need to water the plants.");
  }

  delay(1000);
}
