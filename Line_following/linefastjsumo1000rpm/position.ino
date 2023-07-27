int position1()
{
  readsensor();
  bool In_line = false;
  long Average = 0, sum = 0;
  for (uint8_t i = 0; i < Unit_sensor ; i++)
  {
    long value = map(long(sensor_pin[i]), Black_sensor_values[i], White_sensor_values[i], 1000, 0);
    if (value > 200)
    {
      In_line = true;
    }
    if (value > 50)
    {
      Average += (long)value * (i * 1000);
      sum += value;
    }
  }
  if (!In_line)
  {
    if (Last_Position < (Unit_sensor - 1) * 1000 / 2)
    {
      return 0;
    }
    else
    {
      return (Unit_sensor - 1) * 1000;
    }
  }
  Last_Position = Average / sum;
  return Last_Position;
}
int position2()
{
  readsensor();
  bool In_line = false;
  long Average = 0, sum = 0;
  for (uint8_t i = 0; i < Unit_sensor ; i++)
  {
    long value = map(long(sensor_pin[i]), Black_sensor_values[i], White_sensor_values[i], 1000, 0);
    if (value > 200)
    {
      In_line = true;
    }
    if (value > 50)
    {
      Average += (long)value * (i * 1000);
      sum += value;
    }
  }
  if (!In_line)
  {
    if (Last_Position < (Unit_sensor - 1) * 1000 / 2.8 )
    {
      return 0;
    }
    else if (Last_Position < (Unit_sensor - 1) * 1000 / 1.2  && Last_Position > (Unit_sensor - 1) * 1000 / 2.9 )
    {
      return 3500;
    }
    else if (Last_Position > (Unit_sensor - 1) * 1000 / 1.3 )
    {
      return 7000;
    }
    else
    {
      return (Unit_sensor - 1) * 1000;
    }
  }
  Last_Position = Average / sum;
  return Last_Position;
}
