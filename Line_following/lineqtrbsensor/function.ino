void view() {
  for (int i = 0; i < 300; i++)
  {
    qtrrc.calibrate();
  }
  for (int i = 0; i < NUM_SENSORS; i++)
  {
    // glcd(i, 0, "min%d ", qtrrc.calibratedMinimumOn[i]);
  }
  for (int i = 0; i < NUM_SENSORS; i++)
  {
    // glcd(i, 9, "max%d ", qtrrc.calibratedMaximumOn[i]);
  }
//  sound(1000, 1000);
//  while (sw_OK() == 0)  {
//    position = qtrrc.readLine(sensorValues);
//    //  glcd(8, 1, "pos>%d<<<   ", position);
//  }
}
void fix() {
  qtrrc.calibrate();
  qtrrc.calibratedMinimumOn[0] = 304; qtrrc.calibratedMaximumOn[0] = 1120;
  qtrrc.calibratedMinimumOn[1] = 240; qtrrc.calibratedMaximumOn[1] = 928;
  qtrrc.calibratedMinimumOn[2] = 240; qtrrc.calibratedMaximumOn[2] = 928;
  qtrrc.calibratedMinimumOn[3] = 240; qtrrc.calibratedMaximumOn[3] = 936;
  qtrrc.calibratedMinimumOn[4] = 240; qtrrc.calibratedMaximumOn[4] = 996;
  qtrrc.calibratedMinimumOn[5] = 188; qtrrc.calibratedMaximumOn[5] = 820;
  qtrrc.calibratedMinimumOn[6] = 240; qtrrc.calibratedMaximumOn[6] = 932;
  qtrrc.calibratedMinimumOn[7] = 308; qtrrc.calibratedMaximumOn[7] = 1064;
  /*while  (true) {
    position = qtrrc.readLine(sensorValues);
    //glcd(8, 1, "pos%d<<<   ", position);
    }*/

}
