////////////////////////////////
#include <MCP3008.h>
#define CS_PIN 12
#define CLOCK_PIN 9
#define MOSI_PIN 11
#define MISO_PIN 10
MCP3008 adc(CLOCK_PIN, MOSI_PIN, MISO_PIN, CS_PIN);
/////////////////////////////////////////////
#define PWMA  3  //   motor L
#define AIN1  2
#define AIN2  4

#define PWMB  5  //   motor R
#define BIN1  6
#define BIN2  7
/////////////////////////////////////////////
uint8_t Unit_sensor = 8;
uint16_t sensor_pin[8];
uint16_t Black_sensor_values[] = {225 , 199, 321, 268, 247 , 222 , 215 , 305  }; //เเก้ค่าเเสงสีดำ
uint16_t White_sensor_values[] = {986 , 983 , 985 , 985 , 985, 984, 985 , 986 }; //เเก้ค่าเเสงสีขาว
uint32_t Last_Position;
int  power, base, error, last_error, L_motor, R_motor, r, RL_motor, sumerror;
int c1 = 0, cou = 0;



void setup() {

  Serial.begin(9600);
  pinMode(PWMA, OUTPUT);
  pinMode(AIN1, OUTPUT);
  pinMode(AIN2, OUTPUT);
  pinMode(PWMB, OUTPUT);
  pinMode(BIN1, OUTPUT);
  pinMode(BIN2, OUTPUT);
}
void loop()
{
  //pd1(ความเร็ว, ค่าkp, ค่าki, ค่าkd);ข้ามเส้นประไม่ได้
  //pd2(ความเร็ว, ค่าkp, ค่าki, ค่าkd);ข้ามเส้นประได้
  //times1(ความเร็ว, ค่าkp, ค่าki, ค่าkd,เวลา);เดินเวลาข้ามเส้นประไม่ได้
  //times2(ความเร็ว, ค่าkp, ค่าki, ค่าkd,เวลา);เดินเวลาข้ามเส้นประได้
  //tagL(-+ความเร็วซ้าย,+-ความเร็วขวา,delayใช้ในการเลี้ยว); tagด้วยเซนเซอร์สองตัวซ้าย
  //tagR(-+ความเร็วซ้าย,+-ความเร็วขวา,delayใช้ในการเลี้ยว); tagด้วยเซนเซอร์สองตัวขวา
  //tagL2(-+ความเร็วซ้าย,+-ความเร็วขวา,delayใช้ในการเลี้ยว); tagด้วยเซนเซอร์สองตัวซ้ายเเต่เดินข้าเส้นประได้
  //tagR2(-+ความเร็วซ้าย,+-ความเร็วขวา,delayใช้ในการเลี้ยว); tagด้วยเซนเซอร์สองตัวขวาเเต่เดินข้าเส้นประได้
  //คำสั่งมอเตอร์ motor1(+-ความเร็ว); motor2(+-ความเร็ว);
}
