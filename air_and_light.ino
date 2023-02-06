#include <Wire.h>
#include <Adafruit_MotorShield.h>
#include "utility/Adafruit_MS_PWMServoDriver.h"

Adafruit_MotorShield AFMS = Adafruit_MotorShield(); 

Adafruit_DCMotor *myMotor = AFMS.getMotor(1);
Adafruit_DCMotor *myOtherMotor = AFMS.getMotor(2);
Adafruit_DCMotor *myThirdMotor = AFMS.getMotor(3);

void setup() {
{
  AFMS.begin();
 
  
}


}

void loop() {

  
  myThirdMotor->setSpeed(70);
  myThirdMotor->run(FORWARD);
  delay(50);
  
  myMotor->setSpeed(70);
  myMotor->run(FORWARD);
  delay(5000);
  myMotor->run(RELEASE);
  delay(2000);

   myThirdMotor->run(RELEASE);
  delay(50);
  
  myOtherMotor->setSpeed(170);
  myOtherMotor->run(FORWARD);
  delay(2000);
  myOtherMotor->setSpeed(170);
  myOtherMotor->run(RELEASE);
  delay(2000);
  
}
