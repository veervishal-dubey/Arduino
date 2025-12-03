#include <Servo.h>
Servo myServo;
// Servo motor has 3 pins: VCC that connects to 5V pin, ground that connects to GND and signal that connects to the PWM D pin.
// potentiometer has 3 pins: 2 terrminals, connect one to 5V, one to GND, and one signal that connects to an analog pin.
void setup() {
    myServo.attach(10); 
  // attach servo to a pwm pin
}

void loop() {
    int potentiometervalue=analogRead(A0); //read the potentiometer control signal
    int servo_val=map(potentiometervalue,0,1023,0,180); //convert value range from (0,1023) to (0,180)
  // sweep the arc in order
    for (int i=0;i<=servo_val;i++)
      {
        myServo.write(i);
        //rotate the servo motor that many degrees as needed,
        delay(15);
      }
  // sweep the arc in reverse
    delay(1000);
    for (int i=servo_val;i>=0;i--)
      {
        myServo.write(i);
        delay(15);
      }
    delay(1000);
}
