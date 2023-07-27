void test()
{

  digitalWrite(INA_L, HIGH);
  digitalWrite(INB_L, LOW);
  analogWrite(PWM_L, 150);
  delay(1000);
  digitalWrite(INA_L, HIGH);
  digitalWrite(INB_L, LOW);
  analogWrite(PWM_L, 0);
  delay(1000);
  digitalWrite(INA_L, LOW);
  digitalWrite(INB_L, HIGH);
  analogWrite(PWM_L, 150);
  delay(2000);
  digitalWrite(INA_L, LOW);
  digitalWrite(INB_L, HIGH);
  analogWrite(PWM_L, 0);
}
