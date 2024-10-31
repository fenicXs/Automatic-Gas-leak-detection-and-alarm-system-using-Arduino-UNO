#include <Servo.h>
#define gas_sensor  A0
#define buzzer      8
#define fan         10

int sensor_value;
Servo servo;


void setup() {
  //Serial.begin(9600);
  pinMode(buzzer, OUTPUT);
  pinMode(fan, OUTPUT);
  servo.attach(9); //servo motor signal pin attached to arduino pin 9
  servo.write(2); //regulator on
}

void loop() {
  sensor_value = analogRead(gas_sensor);
  Serial.println(sensor_value);
  if (sensor_value > 250) // change this value according to sensitivity of gas
  {
    digitalWrite(buzzer, HIGH);
    digitalWrite(fan, HIGH);
    servo.write(130);
  }
  else
  {
    digitalWrite(buzzer, LOW);
    digitalWrite(fan, LOW);
     servo.write(5);
  }
  delay(500);
}
