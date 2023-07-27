void FLCS(int z) 
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
    motor(12,power);
  }
  else
  {
    FL=FL*0.09; ///
  if(FL>0)
  {
    B = power-FL;
    motor(1,F);
    motor(2,B);
  }
  else
  {
    B = power+FL;
    motor(1,B);
    motor(2,F);
  }
  }
  }
  if(z==1)
  {
    motor(12,65);
    delay(2);
    motor_stop(ALL);
    delay(200);
  }
  else
  {
    motor(12,65);
    delay(65);
  }
}
