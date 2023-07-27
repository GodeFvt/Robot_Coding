void PID(int Power_straight , int power, int FB) 
{
  if (FB == 1)
  {
    position2();
    error = position ;
    if (error == 0) BaseSpeed = Power_straight;
    else BaseSpeed = power;
    motorSpeed = (Kp2 * error) + (Kd2 * (error - lastError));
    lastError = error;
    leftMotorSpeed = BaseSpeed - motorSpeed;
    rightMotorSpeed = BaseSpeed + motorSpeed;
    if (leftMotorSpeed <= 0) leftMotorSpeed = 0;
    if (rightMotorSpeed <= 0) rightMotorSpeed = 0;
    if (leftMotorSpeed >= 100) leftMotorSpeed = 100;
    if (rightMotorSpeed >= 100) rightMotorSpeed = 100;
    motor(1, -rightMotorSpeed);
    motor(2, -leftMotorSpeed * 0.95);
  }
  else
  {
    position1();
    error = position ;
    if (error == 0) BaseSpeed = Power_straight;
    else BaseSpeed = power;
    motorSpeed = (Kp1 * error) + (Kd1 * (error - lastError));
    lastError = error;
    leftMotorSpeed = BaseSpeed - motorSpeed;
    rightMotorSpeed = BaseSpeed + motorSpeed;
    if (leftMotorSpeed <= 0) leftMotorSpeed = 0;
    if (rightMotorSpeed <= 0) rightMotorSpeed = 0;
    if (leftMotorSpeed >= 100) leftMotorSpeed = 100;
    if (rightMotorSpeed >= 100) rightMotorSpeed = 100;
    motor(1, leftMotorSpeed);
    motor(2, rightMotorSpeed * 0.95);
  }
  }
  void times(int Power_straight , int power, int FB, int Times)
{
  long now_times = millis();
  while (millis() - now_times < Times)
  {
    PID(Power_straight ,  power,  FB);
  }
}
  
