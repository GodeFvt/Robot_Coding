void U() 
{
  while(analog(1)>300)
  {
  motor(1,-60);
  motor(2,45);
  }
  delay(100);
  while(analog(1)>300)
  {
  motor(1,-60);
  motor(2,45);
  }
  delay(50);
  motor_stop(ALL);
  delay(200);
}
