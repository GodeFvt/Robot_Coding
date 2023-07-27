int r; //ค่าrandom มุมเลี้ยว
int G;
/*

  เเสง ซ้าย 1 ขวา 2  i A5 U ขวา t6 e5  ซ้าย t8 e7า
*/
#define PWMA  2  //   motor R
#define AIN1  3
#define AIN2  4
#define PWMB  9  //   motor L
#define BIN1  10
#define BIN2  11
int c[2], i[3], base = 30, s[2], a = 0, k = 0, li[3] = {0, 0, 0};
void setup()
{
  Serial.begin(9600);
  pinMode(PWMA, OUTPUT);
  pinMode(AIN1, OUTPUT);
  pinMode(AIN2,  OUTPUT);
  pinMode(PWMB, OUTPUT);
  pinMode(BIN1, OUTPUT);
  pinMode(BIN2, OUTPUT);
  //    do
  //    {
  //      G = digitalRead(13);
  //      Serial.print(G);
  //    } while (G != 0);
  while (digitalRead(12) == 0)
  {
    Serial.print("H");
  }

}
void loop()
{
  //view();

    T();

  //Serial.println(U(6,5));




}
