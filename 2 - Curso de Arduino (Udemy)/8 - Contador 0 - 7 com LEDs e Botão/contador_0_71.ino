//////////////
// EDIVÂNIA //
//   UFPI   //
//   2022   //
//////////////

int l0 = 5, l1 = 6, l2 = 7, bot = 4;
int es, cont = 0;

void setup()
{
  pinMode(l0, OUTPUT);
  pinMode(l1, OUTPUT);
  pinMode(l2, OUTPUT);
  pinMode(bot, INPUT);
  
  Serial.begin(6600);
}

void loop()
{ 
  es = digitalRead(bot);
  
  if(es == 1 && cont == 0)
  {
    cont++;
    digitalWrite(l0, LOW);
    digitalWrite(l1, LOW);
    digitalWrite(l2, LOW);
    delay(500);
  }
  
  es = digitalRead(bot);
  
  if(es == 1 && cont == 1)
  {
    cont++;
    digitalWrite(l0, HIGH);
    Serial.println("Contagem = 1");
    delay(500);
  }
  
  es = digitalRead(bot);
  
  if(es == 1 && cont == 2)
  {
    cont++;
    digitalWrite(l0, LOW);
    digitalWrite(l1, HIGH);
    Serial.println("Contagem = 2");
    delay(500);
  }
  
  es = digitalRead(bot);
  
  if(es == 1 && cont == 3)
  {
    cont++;
    digitalWrite(l0, HIGH);
    digitalWrite(l1, HIGH);
    Serial.println("Contagem = 3");
    delay(500);
  }
  
  es = digitalRead(bot);
  
  if(es == 1 && cont == 4)
  {
    cont++;
    digitalWrite(l0, LOW);
    digitalWrite(l1, LOW);
    digitalWrite(l2, HIGH);
    Serial.println("Contagem = 4");
    delay(500);
  }
  
  es = digitalRead(bot);
  
  if(es == 1 && cont == 5)
  {
    cont++;
    digitalWrite(l0, HIGH);
    digitalWrite(l2, HIGH);
    Serial.println("Contagem = 5");
    delay(500);
  }
  
  es = digitalRead(bot);
  
  if(es == 1 && cont == 6)
  {
    cont++;
    digitalWrite(l0, LOW);
    digitalWrite(l1, HIGH);
    digitalWrite(l2, HIGH);
    Serial.println("Contagem = 6");
    delay(500);
  }
  
  es = digitalRead(bot);
  
  if(es == 1 && cont == 7)
  {
    cont = 0;
    digitalWrite(l0, HIGH);
    digitalWrite(l1, HIGH);
    digitalWrite(l2, HIGH);
    Serial.println("Contagem = 7");
    delay(500);
  }
}