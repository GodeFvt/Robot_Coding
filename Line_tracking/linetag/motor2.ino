void motor2(int speed)
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
  boolean inPin1;
  boolean inPin2;

  if (speed >= 0)
  {
    inPin1 = HIGH;
    inPin2 = LOW;
  }
  else if (speed < 0)
  {
    inPin1 = LOW;
    inPin2 = HIGH;
    speed = speed * -1;
  }
  digitalWrite(BIN1, inPin1);
  digitalWrite(BIN2, inPin2);
  analogWrite(PWMB, speed);
}
