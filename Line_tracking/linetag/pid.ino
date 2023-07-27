void pd1(int base, float kp, float kd) // 35 0.03 0.06 pidปกติ
{
  error = position1() - 3500;
  power = (kp * error)  + (kd * (error - last_error));
  last_error = error;
  L_motor = base + power;
  R_motor = base - power;
  if (L_motor >= 60)L_motor = 60;
  if (R_motor >= 60)R_motor = 60;
  if (L_motor <= -60)L_motor = -60;
  if (R_motor <= -60)R_motor = -60;
  motor2(R_motor); motor1(L_motor);

}
void pd2(int base, float kp, float kd) // 35 0.03 0.06  //pidข้าเส้นประได้
{
  error = position2() - 3500;
  power = (kp * error)   + (kd * (error - last_error));
  last_error = error;
  L_motor = base + power;
  R_motor = base - power;
  if (L_motor >= 60)L_motor = 60;
  if (R_motor >= 60)R_motor = 60;
  if (L_motor <= -60)L_motor = -60;
  if (R_motor <= -60)R_motor = -60;
  motor2(R_motor); motor1(L_motor);
}
////////////////////////////////////////////////////////////
void times1(int speed1, float kp, float kd, int Times) //เดินเวลาpidปกติ
{
  long now_times = millis();
  while (millis() - now_times < Times)
  {
    pd1(speed1, kp, kd);
  }
}

void times2(int speed1, float kp, float kd, int Times) //เดินเวลาpidข้าเส้นประได้
{
  long now_times = millis();
  while (millis() - now_times < Times)
  { 
    pd2(speed1, kp, kd);
  }

}
