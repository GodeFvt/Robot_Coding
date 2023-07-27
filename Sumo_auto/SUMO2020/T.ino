void T()
{
  if (analogRead(A1) > 300 || analogRead(A2) > 300)

  {
    if (analogRead(A1) > analogRead(A2))
    {
      B(80);
      r = random(100, 300);
      L(r);
    }
    else
    {
      B(80);
      r = random(100, 300 );
      R(r);
    }
  }
  else if (analogRead(A5) > 110 && (analogRead(A1) < 400 && analogRead(A2) < 400))
  {
    unsigned long s = 30;
    unsigned long time = millis();
    time = time + s;
    while ((analogRead(A1) < 400 && analogRead(A2) < 400) && analogRead(A5) > 110 && time > millis())
    {
      motorL(40);
      motorR(40);
    }
  }

  else
  {
    if ((analogRead(A1) < 450 && analogRead(A2) < 450))
    { while (U(6, 5) > 20 && U(8, 7) > 20)
      {
        motorL(20);
        motorR(20);
      }
//      if (U(6, 5) < 15) {
//        unsigned long s = 150;
//        unsigned long time = millis();
//        time = time + s;
//        while (analogRead(A5) < 110 && analogRead(A1) < 450 && analogRead(A2) < 450 && time > millis())
//        {
//
//          motorL(40);
//          motorR(-40);
//        }
//      }
      if (U(8, 7) < 15) {
        unsigned long s = 150;
        unsigned long time = millis();
        time = time + s;
        while (analogRead(A5) < 110 && analogRead(A1) < 450 && analogRead(A2) < 450 && time > millis())
        {

          motorL(-40);
          motorR(40);
        }
      }
    }

  }
}
