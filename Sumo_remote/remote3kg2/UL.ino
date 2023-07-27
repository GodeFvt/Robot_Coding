void ulti(){
if (LR >  50)LR = 100;
  if (LR < -50)LR = -100;
  if (FB > 50)FB = 100;
  if (FB < -50)FB = -100;
  if (ch1 == 0 || ch3 == 0) {
    motorA(0);
    motorB(0);
  }
  else if (LR > -10 && LR < 10 && FB > -20 && FB < 20) {
    motorA(0);
    motorB(0);
  }
  else{
  int L_motor = FB + (LR / 1.5);
    int R_motor = FB - (LR / 0.5);
    if (L_motor > 40)L_motor = 100;
    if (L_motor < -40) L_motor = -100;
    if (R_motor > 40) R_motor = 100;
    if (R_motor < -40) R_motor = -100;
    motorB(L_motor);
    motorA(R_motor);
    }
}
