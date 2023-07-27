void MF(int speed)
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
  digitalWrite(15, inPin1);
  digitalWrite(analog(4), inPin2);
  analogWrite(14, speed);
}
