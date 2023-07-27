void FLC(int z) 
{
  while(analog(1)>400 && analog(4)>400)
  {
  int power = 80;
  int S2 = analog(2);
  int S3 = analog(3);
  float FL = (S2-S3);
  int F=power;
  int B=0;
  if(FL>-150 && FL<150)
  {
    motor(34,power);
    motor(56,power);
  }
  else
  {
    FL=FL*0.1; ///
  if(FL>0)
  {
    B = power-FL;
    motor(34,F);
    motor(56,B);
  }
  else
  {
    B = power+FL;
    motor(34,B);
    motor(56,F);
  }
  }
  }
  if(z==1)
  {
    motor(34,65);
    motor(56,65);
    delay(100);
    motor_stop(ALL);
    delay(200);
  }
  else
  {
    motor(34,65);
    motor(56,65);
    delay(65);
  }
}
