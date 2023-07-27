void pd1(int base, float kp, float kd) // 35 0.03 0.06 
{
  error = position1() - 3500;
  power = (kp * error) + (kd * (error - last_error));
  last_error = error;
  L_motor = base + power;
  R_motor = base - power;
  if (L_motor >= 100)L_motor = 100;
  if (R_motor >= 100)R_motor = 100;
  if (L_motor <= -100)L_motor = -100;
  if (R_motor <= -100)R_motor = -100;
  motor2(R_motor); motor1(L_motor);
}
void times1(int speed1, float kp, float kd, int Times)
{
  long now_times = millis();
  while (millis() - now_times < Times)
  {
    pd1(speed1, kp, kd);
  }
}

void tag(float Power , float pp, float dd , float d )
{
  if (d == 1) {
    while (true)
    {
      if (adc.readADC(7) <= 300 && adc.readADC(0) <= 300)
      {
        break;
      }
      pd1(Power, pp, dd );
    }
  }
}
//////////////////////////////////////////////////////////////////
void pd2(int base, float kp, float kd) // 35 0.03 0.06
{
  error = position2() - 3500;
  power = (kp * error) + (kd * (error - last_error));
  last_error = error;
  L_motor = base + power;
  R_motor = base - power;
  if (L_motor >= 100)L_motor = 100;
  if (R_motor >= 100)R_motor = 100;
  if (L_motor <= -100)L_motor = -100;
  if (R_motor <= -100)R_motor = -100;
  motor2(R_motor); motor1(L_motor);
}
void times2(int speed1, float kp, float kd, int Times)
{
  long now_times = millis();
  while (millis() - now_times < Times)
  {
    pd2(speed1, kp, kd);
  }
}
