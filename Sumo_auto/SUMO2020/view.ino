void view() {
  readsensor();
  //maps();
  for (int j = 0; j < 3; j++)
  {
    Serial.print(i[j]);
    Serial.print('\t');
  }
  for (int j = 0; j < 2; j++)
  {
    Serial.print(c[j]);
    Serial.print('\t');
  }

  Serial.println(" ");
  delay(50);
}
void readsensor()
{
  i[0] = U(6,5);
  i[1] = analogRead(A5);
  i[2] = U(8,7);
  c[0] = analogRead(A2);
  c[1] = analogRead(A1);
  for (int j = 0; j < 3; j++)
  {
    i[j] = (i[j] + li[j]) / 2;
    li[j] = i[j];
  }

}
