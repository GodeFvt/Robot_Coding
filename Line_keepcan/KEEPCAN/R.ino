void R() 
{
  motor(1,45);
  motor(2,-60);
  delay(200);
  while(analog(4)>500)
  {
  motor(1,45);
  motor(2,-60);
  }
  delay(60); //...40
  motor_stop(ALL);
  delay(200);
}
