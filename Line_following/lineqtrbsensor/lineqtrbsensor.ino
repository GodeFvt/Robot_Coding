//#include <popx2.h>	// POP-X2 Board
#include <QTRSensors.h>
#define NUM_SENSORS  8    // number of sensors used
#define TIMEOUT       2500  // waits for 2500 microseconds for sensor outputs to go low
#include <SparkFun_TB6612.h>
#define AIN1 7
#define BIN1 9
#define AIN2 6
#define BIN2 10
#define PWMA 5
#define PWMB 11
#define STBY 8
const int offsetA = -1;
const int offsetB = -1;
Motor motor1 = Motor(AIN1, AIN2, PWMA, offsetA, STBY);
Motor motor2 = Motor(BIN1, BIN2, PWMB, offsetB, STBY);
void motor(int portM, int p)
{
  if (p > 255)p = 255;
  if (p < -255)p = -255;
  p = (p * 255) / 100;
  if (portM == 1) {
    motor1.drive(p);
  }
  else if (portM == 2) {
    motor2.drive(p);
  }
}
void motor_stop(int portM)
{
  if (portM == 1) {
    motor1.brake();
  }
  else if (portM == 2) {
    motor2.brake();
  }
}
void ao()
{
  motor_stop(1); motor_stop(2);
}
QTRSensors qtrrc((unsigned char[]) {
  2, 3, A5, A4, A3, A2, A1, A0
},
NUM_SENSORS, TIMEOUT);
int position, power, base, error, last_error, L_motor, R_motor;
unsigned int sensorValues[NUM_SENSORS];
void setup() {
  delay(100);
  wait_ok(3, 4);
  //digitalWrite(13, HIGH);
  //delay(100);
  //digitalWrite(13, LOW);
  //view();
  //digitalWrite(13, HIGH);
  //delay(1000);
  fix();
  sb(30, 0.015, 0.03);
  ao();
  delay(100);
  times(25, 0.009, 0.032, 4000);
  times(50, 0.015, 0.03, 4000);
  /*sL(25, 0.015, 0.03);
    motor_stop(1);motor_stop(2);
    delay(100);
    motor(1, 30); motor(2, 30);
    delay(200);
    L(25, 1);
    motor_stop(1);motor_stop(2);
    delay(100);*/
  times(60, 0.01, 0.091, 6000);
  times(50, 0.02, 0.091, 7000);
  times(50, 0.02, 0.091, 1000);
  ao();
  delay(100);
}
void loop() {

}

void wait_ok(int pinA, int pinB)
{
  pinMode(pinA, OUTPUT);
  pinMode(pinB, INPUT);
  digitalWrite(pinA, HIGH);
  delay(10);
  while (digitalRead(pinB) == HIGH) {}
}
