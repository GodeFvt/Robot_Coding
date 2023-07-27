void R(unsigned long t)
{
  unsigned long time = millis();
  time = time + t;
  while ((time > millis()) &&   (analogRead(A1) <300 && analogRead(A2) < 300&& analogRead(A5) < 110) )
  {
    motorL(50);
    motorR(-50);
  }
}
//&& analogRead(A5) < 180
