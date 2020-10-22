#include <Servo.h>

Servo servo1;

int light_pin = 0;
int servo_pin = 3;
int light;
int pos;

void setup() {
  // put your setup code here, to run once:
  servo1.attach(servo_pin);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  light = analogRead(light_pin);
  pos = map(light, 0, 1023, 0, 180);
  servo1.write(pos);
  delay(50);
  Serial.println(light);
}
