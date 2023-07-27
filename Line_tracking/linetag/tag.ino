void tagL(int p1, int p2, int d) //tagด้วยเซนเซอร์สองตัวซ้าย
{
  while (true)
  {
    if (adc.readADC(7) < 700  && adc.readADC(6) < 700 )
    {
      break;
    }
    pd1(30, 0.022, 0.2);
  }

  motor1(p1);
  motor2(p2);
  delay(d);
}
void tagR(int p1, int p2, int d) //tagด้วยเซนเซอร์สองตัวขวา
{
  while (true)
  {
    if (adc.readADC(0) < 700  && adc.readADC(1) < 700 )
    {
      break;
    }
   
    pd1(30, 0.022, 0.2);
  }

  motor1(p1);
  motor2(p2);
  delay(d);
}
void tagL2(int p1, int p2, int d) //tagด้วยเซนเซอร์สองตัวซ้ายเเต่เดินข้าเส้นประได้
{
  while (true)
  {
    if (adc.readADC(0) < 700  && adc.readADC(1) < 700 )
    {
      break;
    }
   
    pd2(30, 0.022, 0.2);
  }

  motor1(p1);
  motor2(p2);
  delay(d);
}
void tagR2(int p1, int p2, int d) //tagด้วยเซนเซอร์สองตัวขวาเเต่เดินข้าเส้นประได้
{
  while (true)
  {
    if (adc.readADC(0) < 700  && adc.readADC(1) < 700 )
    {
      break;
    }
   
    pd2(30, 0.022, 0.2);
  }

  motor1(p1);
  motor2(p2);
  delay(d);
}
