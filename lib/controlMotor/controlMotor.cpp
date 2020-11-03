#include "controlMotor.h"
#include "config.h"

// Left Motor
void motorLeftStop()
{
    digitalWrite(int1Left, LOW);
    digitalWrite(int2Left, LOW);
}
void motorLeftForward(int speed)
{
    speed = constrain(speed, MIN_SPEED, MAX_SPEED);
    digitalWrite(int1Left, HIGH);
    analogWrite(int2Left, 255 - speed);
}
void motorLeftBackward(int speed)
{
    speed = constrain(speed, MIN_SPEED, MAX_SPEED);
    digitalWrite(int1Left, LOW);
    analogWrite(int2Left, speed);
}

//Right Motor
void motorRightStop()
{
    digitalWrite(int3Right, LOW);
    digitalWrite(int4Right, LOW);
}
void motorRightForward(int speed)
{
    speed = constrain(speed, MIN_SPEED, MAX_SPEED);
    digitalWrite(int4Right,HIGH);
    analogWrite(int3Right, 255 - speed);
}
void motorRightBackward(int speed)
{
    speed = constrain(speed, MIN_SPEED, MAX_SPEED);
    digitalWrite(int4Right, LOW);
    analogWrite(int3Right, speed);
}
//

void carForward(int speed)
{
    motorLeftForward(speed);
    motorRightForward(speed);
}