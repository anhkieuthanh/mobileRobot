#include <Arduino.h>
#include <Wire.h>
#include <MPU6050.h>
#include "I2Cdev.h"
#include "controlMotor.h"
#include "config.h"
#define OUTPUT_READABLE_ACCELGYRO

MPU6050 mpu(0x68);
int16_t AccX, AccY, AccZ, GyX, GyY, GyZ;
void setup()
{
  pinMode(int1Left,OUTPUT);
  pinMode(int2Left,OUTPUT);
  pinMode(int3Right,OUTPUT);
  pinMode(int4Right,OUTPUT);
  Wire.begin();
  Serial.begin(9600);
  mpu.initialize();
  mpu.setFullScaleAccelRange(2); //Set scale +/- 8g
  mpu.setFullScaleGyroRange(1);  //Set scalde: 500 degree/sec
    carForward(100);
}
void loop()
{
//   mpu.getMotion6(&AccX, &AccY, &AccZ, &GyX, &GyY, &GyZ);
// #ifdef OUTPUT_READABLE_ACCELGYRO
  
//   Serial.print(AccX);
//   Serial.print("\t");
//   Serial.print(AccY);
//   Serial.print("\t");
//   Serial.print(AccZ);
//   Serial.print("\t");
//   Serial.print(GyX);
//   Serial.print("\t");
//   Serial.print(GyY);
//   Serial.print("\t");
//   Serial.println(GyZ);
//   delay(500);
// #endif
// #ifdef OUTPUT_BINARY_ACCELGYRO
//   Serial.write((uint8_t)(ax >> 8));
//   Serial.write((uint8_t)(ax & 0xFF));
//   Serial.write((uint8_t)(ay >> 8));
//   Serial.write((uint8_t)(ay & 0xFF));
//   Serial.write((uint8_t)(az >> 8));
//   Serial.write((uint8_t)(az & 0xFF));
//   Serial.write((uint8_t)(gx >> 8));
//   Serial.write((uint8_t)(gx & 0xFF));
//   Serial.write((uint8_t)(gy >> 8));
//   Serial.write((uint8_t)(gy & 0xFF));
//   Serial.write((uint8_t)(gz >> 8));
//   Serial.write((uint8_t)(gz & 0xFF));
// #endif

}