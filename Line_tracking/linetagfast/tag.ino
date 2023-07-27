void tagL(int p1, int p2, int d)
{
  while (true)
  {
    if (adc.readADC(7) < 700  && adc.readADC(6) < 700 )
    {
      break;
    }
    pd1(50, 0.022, 0.23);
  }
  motor1(p1);
  motor2(p2);
  delay(d);
}

void tagR(int p1, int p2, int d)
{
  while (true)
  {
    if (adc.readADC(0) < 700  && adc.readADC(1) < 700 )
    {
      break;
    }
   
    pd1(50, 0.022, 0.23);
  }
  motor1(p1);
  motor2(p2);
  delay(d);
}

void tagB(int p1, int p2, int d)
{
  while (true)
  {
    if (adc.readADC(0) < 700   )
    {
      break;
    }
   
    pd2(50, 0.017, 0.2);
  }
  motor1(p1);
  motor2(p2);
  delay(d);
}

void tagL1(int p1, int p2, int d)
{
  while (true)
  {
    if (adc.readADC(7) < 700  && adc.readADC(6) < 700 )
    {
      break;
    }
    pd1(30, 0.022, 0.23);
  }
  motor1(p1);
  motor2(p2);
  delay(d);
}
