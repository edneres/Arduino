//////////////
// EDIVÂNIA //
//   UFPI   //
//   2022   //
//////////////

int b1 = 3, b2 = 2, led = 13;
int es1, es2;
int aux = 0;

void setup()
{
  pinMode(b1, INPUT);
  pinMode(b2, INPUT);
  pinMode(led, OUTPUT);
  
  Serial.begin(6600);
}

void loop()
{
  es1 = digitalRead(b1);
  es2 = digitalRead(b2);
  
  if(es1 == 0 && es2 == 0)
    digitalWrite(led, LOW);
  
  if(es1 == 0 && es2 == 1)
  {
    digitalWrite(led, HIGH);
    Serial.println("LED ligado");
  }
  
  if(es1 == 1 && es2 == 0)
  {
    digitalWrite(led, HIGH);
    delay(200);
    digitalWrite(led, LOW);
    delay(200);
    Serial.println("Velocidade 1");
  }
  
  if(es1 == 1 && es2 == 1)
  {
    digitalWrite(led, HIGH);
    delay(500);
    digitalWrite(led, LOW);
    delay(500);
    Serial.println("Velocidade 2");
  }
}