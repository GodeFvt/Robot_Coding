void L() 
{
  motor(1,-60);
  motor(2,45);
  delay(150);
  while(analog(1)>600)
  {
  motor(1,-60);
  motor(2,45);
  }
  delay(90); //...80
  motor_stop(ALL);
  delay(200);
}
