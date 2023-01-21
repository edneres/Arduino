//////////////
// EDIVÂNIA //
//   UFPI   //
//   2022   //
//////////////

int led = 13, b1 = 7, b2 = 2;
int e1 = 0, e2 = 0;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(b1, INPUT);
  pinMode(b2, INPUT);
}

void loop()
{
  e1 = digitalRead(b1);
  e2 = digitalRead(b2);
  
  if (e1 == 0 && e2 == 0)
    digitalWrite(led, HIGH);
  
  if (e1 == 0 && e2 == 1 || e1 == 1 && e2 == 0)
    digitalWrite(led, LOW);
  
  if (e1 == 1 && e2 == 1)
  {
    digitalWrite(led, 1);
    delay(200);
    digitalWrite(led, 0);
    delay(200);
  }
}