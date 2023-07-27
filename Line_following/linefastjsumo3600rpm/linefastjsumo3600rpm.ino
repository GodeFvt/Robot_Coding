#include <MCP3008.h>
#include <Servo.h>
#define CS_PIN 4
#define CLOCK_PIN 0
#define MOSI_PIN 2
#define MISO_PIN 1 //1
MCP3008 adc(CLOCK_PIN, MOSI_PIN, MISO_PIN, CS_PIN);
int i = 0;
#define PWMA  3  //   motor L
#define AIN1  12
#define PWMB  11  //   motor R
#define BIN1  13
Servo esc;

uint8_t Unit_sensor = 8;
uint16_t sensor_pin[8];
uint16_t Black_sensor_values[] = {376,  375 , 394 , 483 , 378, 384 , 390 , 406   };
uint16_t White_sensor_values[] = {1001 , 1003 , 1002 , 1005 , 1001 , 1003 , 1000,  1004};
uint32_t Last_Position;
int  power, base, error, last_error, L_motor, R_motor, r, RL_motor;
int c1 = 0, cou = 0;

int position()
{
  readsensor();
  bool In_line = false;
  long Average = 0, sum = 0;
  for (uint8_t i = 0; i < Unit_sensor ; i++)
  {
    long value = map(long(sensor_pin[i]), Black_sensor_values[i], White_sensor_values[i], 1000, 0);
    if (value > 200)
    {
      In_line = true;
    }
    if (value > 50)
    {
      Average += (long)value * (i * 1000);
      sum += value;
    }
  }
  if (!In_line)
  {
    if (Last_Position < (Unit_sensor - 1) * 1000 / 2)
    {
      return 0;
    }
    else
    {
      return (Unit_sensor - 1) * 1000;
    }
  }
  Last_Position = Average / sum;
  return Last_Position;
}

void setup() {

  Serial.begin(9600);
  pinMode(PWMA, OUTPUT);
  pinMode(AIN1, OUTPUT);
  pinMode(PWMB, OUTPUT);
  pinMode(BIN1, OUTPUT);

//  esc.attach(10); //Set I/O PWM
//  for ( i =  i; i < 60; i++)
//  {
//    esc.write(i);
//    delay(120);
//  }
//  while (true) {
//    if (analogRead(A2) > 500)
//    {
//      break;
//    }
//  }
//  delay(1000);
}
void loop() {
  //  times(20, 0.035, 0.4, 2000);
  //  seeerror();
    view();
  //  esc.write(95);
  //  times(20, 0.030, 0.31, 4000);
  //  esc.write(95);
  // esc.write(80);
  //  pd(17, 0.014, 0.5);
//  esc.write(80);
//  times(25, 0.02, 0.32, 800);
//  esc.write(80);
//  times(15, 0.006, 0.32, 300);
//  esc.write(80);
//  times(30, 0.02, 0.35, 500);
//  esc.write(85);
//  times(15, 0.010, 0.32, 1000);
//  esc.write(80);
////  times(12, 0.095, 0.31, 1000);
//  esc.write(80);
//  times(20, 0.02, 0.35, 3600);
////  
//  esc.write(80);
//  times(30, 0.02, 0.35, 100);
//  esc.write(80);
//  times(20, 0.01, 0.35, 1300);
////
//  esc.write(90);
//  times(15, 0.025, 0.4, 2160);
////
//  esc.write(85);
//  times(22, 0.01, 0.31, 3500);
//  esc.write(80);
//  times(15, 0.009, 0.35, 2000);
//   esc.write(80);
//  times(15, 0.017, 0.32, 3100);
//   esc.write(85);
//  times(22, 0.015, 0.41, 4000);
//
//  motor1(0);
//  motor2(0);
//  esc.write(0);
//  delay(10000);
//  delay(10000);
//  delay(10000);
//  delay(10000);
  //  delay(10000);
  //  delay(10000);
  //  delay(10000);


}
