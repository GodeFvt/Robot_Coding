void pd1(int base, float kp, float kd) // 35 0.03 0.06
{
  error = position1() - 3500;
  power = (kp * error) + (kd * (error - last_error));
  last_error = error;
  L_motor = base + power;
  R_motor = base - power;
  if (L_motor >= 50)L_motor = 50;
  if (R_motor >= 50)R_motor = 50;
  if (L_motor <= -50)L_motor = -50;
  if (R_motor <= -50)R_motor = -50;
  motor2(R_motor); motor1(L_motor);
}

void times(int speed1, float kp, float kd, int Times)
{
  long now_times = millis();
  while (millis() - now_times < Times)
  {
    pd1(speed1, kp, kd);
  }
}

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
void pd3(int base, float kp, float kd) // 35 0.03 0.06
{
  error = position1() - 3500;
  power = (kp * error) + (kd * (error - last_error));
  last_error = error;
  L_motor = base + power;
  R_motor = base - power;
  if (L_motor >= 60)L_motor = 60;
  if (R_motor >= 60)R_motor = 60;
  if (L_motor <= -60)L_motor = -60;
  if (R_motor <= -60)R_motor = -60;
  motor2(R_motor); motor1(L_motor);
}

void times3(int speed1, float kp, float kd, int Times)
{
  long now_times = millis();
  while (millis() - now_times < Times)
  {
    pd3(speed1, kp, kd);
  }
}
void pd4(int base, float kp, float kd) // 35 0.03 0.06
{
  error = position1() - 3500;
  power = (kp * error) + (kd * (error - last_error));
  last_error = error;
  L_motor = base + power;
  R_motor = base - power;
 
  motor2(R_motor); motor1(L_motor);
}

void times4(int speed1, float kp, float kd, int Times)
{
  long now_times = millis();
  while (millis() - now_times < Times)
  {
    pd4(speed1, kp, kd);
  }
}
