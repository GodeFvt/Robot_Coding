void FLT (int x) 
{     
       int i=0;
while(i < x)
{
  int power = 40;
  int S2 = analog(2);
  int S3 = analog(3);
  float FL = (S2-S3);
  int F=power;
  int B=0;
    i=i+1;
    glcd(0,0,"%d",i);
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
}
