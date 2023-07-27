
void fan(int LR )
{
  if (LR == 2)
  {
    myservo.writeMicroseconds(0);
    delay(150);
    motor(3, 100);
    delay(150);
    motor(3, 0);
 delay(10);
    motor(3, 100);
    delay(20);
    motor(3, 0);
    myservo.writeMicroseconds(1450);


  }
  else if (LR == 0)
  {
    //    myservo.writeMicroseconds(1450);
    //    delay(200);
    motor(3, 100);
    delay(150);
    motor(3, 0);
    delay(20);
  }
  else if (LR == 1)
  {
    myservo.writeMicroseconds(3000);
    delay(150);
    motor(3, 100);
    delay(150);
    motor(3, 0);
   delay(10);
    motor(3, 100);
    delay(20);
    motor(3, 0);
    myservo.writeMicroseconds(1450);


  }
  else if (LR == 4)
  {

    myservo.writeMicroseconds(0);
    delay(150);
    motor(3, 100);
    delay(150);
    motor(3, 0);
    delay(10);
    motor(3, 100);
    delay(20);
    motor(3, 0);

    myservo.writeMicroseconds(3000);
    delay(150); 
    motor(3, 100);
    delay(150);
    motor(3, 0);
    delay(10);
    motor(3, 100);
    delay(50);
    motor(3, 0);

    myservo.writeMicroseconds(1450);


  }

}
