void B(unsigned long t)
{
  unsigned long time = millis();
  time = time + t;
  while (time > millis() )
  {
    motorL(-50);
    motorR(-50);
  }
}
