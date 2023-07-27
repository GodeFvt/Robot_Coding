void pd(int base, float kp, float kd) // 35 0.03 0.06
{
  position = qtrrc.readLine(sensorValues);
  error = position - 3500;
  power = (kp * error) + (kd * (error - last_error));
  last_error = error;
  L_motor = base + power;
  R_motor = base - power;
  if (L_motor >= 100)L_motor = 100;
  if (R_motor >= 100)R_motor = 100;
  if (L_motor <= -100)L_motor = -100;
  if (R_motor <= -100)R_motor = -100;
  motor(1, L_motor); motor(2, R_motor);
}

void times(int speed1, float kp, float kd, int Times) {
  long now_times = millis();
  while (millis() - now_times < Times) {
    pd(speed1, kp, kd);
  }
}
void sb(int speed1, float kp, float kd) { //seeblack
  while (true) {
    qtrrc.readLine(sensorValues);
    if (sensorValues[0] > 200 && sensorValues[7] > 200 ) {
      break;
    }
    pd(speed1, kp, kd);
  }
}

void sL(int speed1, float kp, float kd) { //seeblack
  while (true) {
    qtrrc.readLine(sensorValues);
    if (sensorValues[0] > 200) {
      break;
    }
    pd(speed1, kp, kd);
  }
}

void sR(int speed1, float kp, float kd) { //seeblack
  while (true) {
    qtrrc.readLine(sensorValues);
    if (sensorValues[7] > 200) {
      break;
    }
    pd(speed1, kp, kd);
  }
}
void L(int speed1, int port) { //seeblack
  motor(1, -speed1); motor(2, speed1);
  delay(100);
  while (true) {
    qtrrc.readLine(sensorValues);
    if (sensorValues[port] > 200  ) {
      break;
    }
    motor(1, -speed1); motor(2, speed1);
  }
  motor(1, -speed1); motor(2, speed1);
  delay(20);
  motor_stop(1); motor_stop(2);
}
void R(int speed1, int port) { //seeblack
  motor(1, speed1); motor(2, -speed1);
  delay(100);
  while (true) {
    qtrrc.readLine(sensorValues);
    if (sensorValues[port] > 200 ) {
      break;
    }
    motor(1, speed1); motor(2, -speed1);
  }
  motor(1, speed1); motor(2, -speed1);
  delay(20);
  motor_stop(1); motor_stop(2);

}
