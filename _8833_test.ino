#include <Stepper.h>

// change this to the number of steps on your motor
#define STEPS 200

// create an instance of the stepper class, specifying
// the number of steps of the motor and the pins it's
// attached to
Stepper stepper(STEPS, A2, A3, A5, A4);

#define RED A0 // RED LED
#define GREEN 8 // GREEN LED

#define SLEEP A1 // by default off, connect to high to activate 

void setup()
{
  pinMode(SLEEP,OUTPUT);
    
  pinMode(RED,OUTPUT);
  pinMode(GREEN,OUTPUT);
  // set the speed of the motor to 30 RPMs
  stepper.setSpeed(60);
}

void loop()
{
  
  digitalWrite(SLEEP,HIGH);
  
  digitalWrite(RED,HIGH);
  digitalWrite(GREEN,LOW);
  stepper.step(STEPS);
  
  digitalWrite(RED,LOW);
  digitalWrite(GREEN,HIGH);
  stepper.step(-STEPS);
}
