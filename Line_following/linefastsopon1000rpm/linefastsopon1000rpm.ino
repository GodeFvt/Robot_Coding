#define PWMA  5  //   motor L
#define AIN1  2
#define AIN2  3
#define PWMB  6  //   motor R
#define BIN1  4
#define BIN2  7
#include <MCP3008.h>
#define CS_PIN 10
#define CLOCK_PIN 13
#define MOSI_PIN 11
#define MISO_PIN 12
MCP3008 adc(CLOCK_PIN, MOSI_PIN, MISO_PIN, CS_PIN);
#include <Servo.h>
Servo esc;
uint8_t Unit_sensor = 8;
uint16_t sensor_pin[8];
uint16_t Black_sensor_values[] = {242 , 384 , 377, 251 , 291, 292, 268, 283   };
uint16_t White_sensor_values[] = {991, 990, 990, 997, 990, 998, 999, 995};
uint32_t Last_Position;
int  power, base, error, last_error, L_motor, R_motor, r, RL_motor;
int c1 = 0, cou = 0;
int i = 0;
void setup() {

  Serial.begin(9600);
  pinMode(PWMA, OUTPUT);
  pinMode(AIN1, OUTPUT);
  pinMode(PWMB, OUTPUT);
  pinMode(BIN1, OUTPUT);

  esc.attach(10); //Set I/O PWM
  for ( i =  i; i < 50; i++)
  {
    esc.write(i);
    delay(120);
  }
  while (true) {
    if (analogRead(A4) > 400)
    {
      break;
    }
  }
  delay(1000);
}
void loop() {
  // pd1(80, 0.036, 0.35);
  // times(20, 0.035, 0.4, 2000);
  // seeerror();
  // view();
  esc.write(75);
  pd1(80, 0.036, 0.35);

  //  esc.write(75);
  //  times1(20, 0.030, 0.31, 4000);
  //  esc.write(75);
  //  times1(35, 0.02, 0.35, 200);
  //  esc.write(75);
  //  times1(15, 0.02, 0.35, 1000);
  //  esc.write(75);

  //  times1(35, 0.02, 0.35, 190);
  //  esc.write(75);
  //  times1(15, 0.02, 0.35, 1200);
  //  esc.write(75);
  //  times1(20, 0.02, 0.35, 2800);
  //  esc.write(75);
  //
  //  times1(35, 0.02, 0.35, 280);
  //  esc.write(75);
  //  times1(20, 0.02, 0.35, 700);
  //  esc.write(75);
  //  times1(20, 0.028, 0.35, 2000);
  //  esc.write(75);
  //
  //  motor1(0);
  //  motor2(0);
  //  esc.write(0);
  //  delay(1000);
  //  delay(1000000);
  //  delay(1000000);
  //  delay(1000000);
  //  delay(1000000);
}












//int position()
//{
//  readsensor();
//  bool In_line = false;
//  long Average = 0, sum = 0;
//  for (uint8_t i = 0; i < Unit_sensor ; i++)
//  {
//    long value = map(long(sensor_pin[i]), Black_sensor_values[i], White_sensor_values[i], 1000, 0);
//    if (value > 200)
//    {
//      In_line = true;
//    }
//    if (value > 50)
//    {
//      Average += (long)value * (i * 1000);
//      sum += value;
//    }
//  }
//  if (!In_line)
//  {
//    if (Last_Position < (Unit_sensor - 1) * 1000 / 2)
//    {
//      return 0;
//    }
//    else
//    {
//      return (Unit_sensor - 1) * 1000;
//    }
//  }
//  Last_Position = Average / sum;
//  return Last_Position;
//}
