// Include additional software library to control the motor shield:
#include <Adafruit_MotorShield.h>  // Libary for motor shield

// Create motor-shield object with the default I2C address:
Adafruit_MotorShield myMotorShield = Adafruit_MotorShield(); 

//
// Assign Adafruit_DCMotor objects to the 4 'ports' (connections) on the 
// motor shield. The numbering of these motors assumes that the motors on left of car are 
// wired to 'M1' and 'M2' on the Motor Shield, and the motors on right of car are wired to
// 'M3' and 'M4'. (It's OK to deviate from this convention, but you'll have to modify the 
// 'turn_left' and 'turn_right' functions below.)
//
Adafruit_DCMotor *Motor_A = myMotorShield.getMotor(1); // Assign 'Motor_A' to 'port' M1 on motor shield
Adafruit_DCMotor *Motor_B = myMotorShield.getMotor(2); // Assign 'Motor_B' to 'port' M2 on motor shield
Adafruit_DCMotor *Motor_C = myMotorShield.getMotor(3); // Assign 'Motor_C' to 'port' M3 on motor shield
Adafruit_DCMotor *Motor_D = myMotorShield.getMotor(4); // Assign 'Motor_D' to 'port' M4 on motor shield

void setup()
{
  // Tell the motor shield to begin talking to the Arduino microcontroller (using
  // the default PWM frequency of 1.6 kHz):
  myMotorShield.begin();

  // Set the speed of the motors. Range is 0 (minimum) to 255 (max):
  Motor_A->setSpeed(140);
  Motor_B->setSpeed(140);
  Motor_C->setSpeed(125);
  Motor_D->setSpeed(125);
}

void loop()
{
  // Turn on all 4 motors in the FORWARD direction for 3 seconds:
  Motor_A->run(FORWARD);
  Motor_B->run(FORWARD);
  Motor_C->run(FORWARD);
  Motor_D->run(FORWARD);
  delay(5000);   // Delay 3 seconds while the motors run FORWARD

  
}
