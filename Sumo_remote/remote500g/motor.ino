void motorA(int speed)
{
  speed = speed * 2.55;
  if (speed >= 255)
  {
    speed = 255;
  }
  else if (speed <= -255)
  {
    speed = -255;
  }
  if (speed >= 0)
  {
    digitalWrite(INA_R, LOW);
    digitalWrite(INB_R, HIGH);
  }
  else if (speed < 0)
  {
    digitalWrite(INA_R, HIGH);
    digitalWrite(INB_R, LOW);
    speed = speed * -1;
  }
  analogWrite(PWM_R, speed);
}
void motorB(int speed)
{
  speed = speed * 2.55;
  if (speed >= 255)
  {
    speed = 255;
  }
  else if (speed <= -255)
  {
    speed = -255;
  }


  if (speed >= 0)
  {
    digitalWrite(INA_L, LOW);
    digitalWrite(INB_L, HIGH);
  }
  else if (speed < 0)
  {
    digitalWrite(INA_L, HIGH);
    digitalWrite(INB_L, LOW);
    speed = speed * -1;
  }
  analogWrite(PWM_L, speed);
}
