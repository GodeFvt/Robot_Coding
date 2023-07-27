void motor1(int speed)
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
    inPin1 = LOW;
    inPin2 = HIGH;
    
  }
  else if (speed < 0)
  {
   inPin1 = HIGH;
    inPin2 = LOW;
    speed = speed * -1;
  }
  digitalWrite(AIN1, inPin1);
  digitalWrite(AIN2, inPin2);
  analogWrite(PWMA, speed);
}
