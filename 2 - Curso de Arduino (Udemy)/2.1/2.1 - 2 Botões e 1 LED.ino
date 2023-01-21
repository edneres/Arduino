//////////////
// EDIVÂNIA //
//   UFPI   //
//   2022   //
//////////////

int led = 13, b1 = 7, b2 = 4;
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
  
  if( e1 == 1)
    digitalWrite(led, HIGH);
  
  if (e2 == 1)
    digitalWrite(led, LOW);
}