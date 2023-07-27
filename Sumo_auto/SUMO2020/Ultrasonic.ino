int U(int t, int e) {
  long duration, cm;
  pinMode(t, OUTPUT);
  digitalWrite(t, LOW);
  delayMicroseconds(2);
  digitalWrite(t, HIGH);
  delayMicroseconds(5);
  digitalWrite(t, LOW);
  pinMode(e, INPUT);
  duration = pulseIn(e, HIGH);
  cm = microsecondsToCentimeters(duration);
  return cm ;

}
long microsecondsToCentimeters(long microseconds)
{
  return microseconds / 29 / 2;
}
