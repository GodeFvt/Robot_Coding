void Turn(int LR, int power, int d)
{
  if (LR == 1)
  {
    motor(1, power);
    motor(2, -power);
    delay (d);
    while (map2>= 10)
    {

      motor(1, power);
      motor(2, -power);
    }


  }
  else if (LR ==2)
  {
    motor(1, -power);
    motor(2, power);
    delay (d);
    while (map1  >= 10)
    {
      motor(1, -power);
      motor(2, power);

    }

  }

}
