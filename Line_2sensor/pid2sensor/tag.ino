
void tag(float Power_straight, float power, float FB , float d )
{
  if (FB == 1) {
    while (true)
    {
      if (map3 <= 80 && map4 <= 80)
      {
        break;
      }
      PID(Power_straight, power, FB);
    }

    motor(1, -power);
    motor(2, -power);
    delay (d);

  }
  else if (FB == 0) {
    while (true) {
      if (map1 <= 80 && map2 <= 80)
      {
        break;
      }
      PID(Power_straight, power, FB);
    }

    motor(1, power);
    motor(2, power);
    delay (d);

  }
}

void tagF(float Power_straight, float power, float FB , float d )
{
  if (FB == 1) {
    while (true)
    {
      if (map3 <= 50 && map4 <= 50)
      {
        break;
      }
      PID(Power_straight, power, FB);
    }

    motor(1, -power);
    motor(2, -power);
    delay (d);
    ao();
    if (analog(5) < 200 && analog(6) < 200)
    {
      fan(4);
    }
    else if (analog(6) < 200 )
    {
      fan(1);
    }
    else if (analog(5) < 200 )
    {
      fan(2);
    }


  }
  else if (FB == 0) {
    while (true) {
      if (map1 <= 50 && map2 <= 50)
      {
        break;
      }
      PID(Power_straight, power, FB);
    }

    motor(1, power);
    motor(2, power);
    delay (d);
    ao();
    if (analog(5) < 200 && analog(6) < 200)
    {
      fan(4);
    }
    if (analog(6) < 200)
    {
      fan(1);
    }
    if (analog(5) < 200 )
    {
      fan(2);
    }
  }
}
