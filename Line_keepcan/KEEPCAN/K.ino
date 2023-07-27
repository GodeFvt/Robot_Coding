void K(int k) 
{
if(k==1)
{
  motor(56,-80);
  delay(350);
  motor_stop(56);
  delay(10);
motor(4,-80);
delay(300);
motor_stop(4);
delay(50);

}
else
{
motor(4,80);
delay(290);
motor_stop(4);
delay(50);
  motor(56,80);
delay(200);
  motor_stop(56);
  delay(50);
motor(12,30);
delay(50);
motor_stop(ALL);
delay(200);
motor(12,-30);
delay(500);
motor_stop(ALL);
delay(200);
}
k=0;
}

