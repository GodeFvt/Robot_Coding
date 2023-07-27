#define PWM_L 5
#define INA_L 4
#define INB_L 3
#define PWM_R 10
#define INA_R 11
#define INB_R 12
int ch1, ch3, ch5 , LR, FB, UL ;
void setup() {
  Serial.begin(9600);
  pinMode(7, INPUT);
  pinMode(8, INPUT);
  pinMode(9, INPUT);
  pinMode(PWM_L, OUTPUT);
  pinMode(INA_L, OUTPUT);
  pinMode(INB_L, OUTPUT);
  pinMode(PWM_R, OUTPUT);
  pinMode(INA_R, OUTPUT);
  pinMode(INB_R, OUTPUT);

}
void loop() {
  ch1 = pulseIn(7, HIGH, 25000); delay(10);
  ch3 = pulseIn(8, HIGH, 25000); delay(10);
  ch5 = pulseIn(9, HIGH, 25000); delay(10);
  LR = map(ch1 , 1000, 2000, -100, 100);
  FB = map(ch3 , 1000, 2000, -100, 100);
  UL = map(ch5 , 1000, 2000, -100, 100);
    
  //view();
  if (LR >  75)LR = 85;
  if (LR < -75)LR = -85;
  if (FB > 75)FB = 85;
  if (FB < -75)FB = -85  ;
  if (ch1 == 0 || ch3 == 0) {
    motorA(0);
    motorB(0);
  }
  else if (LR > -10 && LR < 10 && FB > -10 && FB < 10) {
    motorA(0);
    motorB(0);
  }
  else if (UL < 0)
  {
    int L_motor = FB + (LR / 1.5);
    int R_motor = FB - (LR / 1.5);
    if (L_motor > 20)L_motor = 30;
    if (L_motor < -20) L_motor = -30;
    if (R_motor > 20) R_motor = 30;
    if (R_motor < -20) R_motor = -30;
    motorA(L_motor);
    motorB(R_motor);

  }
  else if (UL > 0)
  {
    int L_motor = FB + (LR / 1.5);
    int R_motor = FB - (LR / 1.5);
    if (L_motor > 80)L_motor = 100;
    if (L_motor < -80) L_motor = -100;
    if (R_motor > 80) R_motor = 100;
    if (R_motor < -80) R_motor = -100;
    motorA(L_motor);
    motorB(R_motor);
  }
  else
  {
    int L_motor = FB + (LR / 1.5);
    int R_motor = FB - (LR / 1.5);
    if (L_motor > 20)L_motor = 40;
    if (L_motor < -20) L_motor = -40;
    if (R_motor > 20) R_motor = 40;
    if (R_motor < -20) R_motor = -40;
    motorA(L_motor);
    motorB(R_motor);

 }
 
}
