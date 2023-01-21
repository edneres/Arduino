int l = 8, b1 = 6, b2 = 5, es1, es2, cont1 = 0, cont2 = 0;
  
void setup()
{
  pinMode(b1, INPUT);
  pinMode(b2, INPUT);
  pinMode(l, OUTPUT);
  
  Serial.begin(6600);
}

void loop()
{
  es1 = digitalRead(b1);
  es2 = digitalRead(b2);
  
  if(es1 == 1)
  {
    cont1++;
    
    Serial.print("C1 = ");
    Serial.print(cont1);
    Serial.print(", C2 = ");
    Serial.println(cont2);
    
    if(cont1 == 5)
      cont1 = 0;
    
    if(cont1 == cont2)
    digitalWrite(l, 0);
  
    if(cont1 > cont2)
      digitalWrite(l, HIGH);

    if(cont1 < cont2)
    {
      digitalWrite(l, LOW);
      delay(200);
      digitalWrite(l, HIGH);
      delay(200);
    }
  }
    
  if(es2 == 1)
  {
    if(cont2 > 4)
      cont2 = 0;
    
    cont2++;
    
    Serial.print("C1 = ");
    Serial.print(cont1);
    Serial.print(", C2 = ");
    Serial.println(cont2);
    
    
    
    if(cont1 == cont2)
    digitalWrite(l, 0);
  
    if(cont1 > cont2)
      digitalWrite(l, HIGH);

    if(cont1 < cont2)
    {
      digitalWrite(l, LOW);
      delay(200);
      digitalWrite(l, HIGH);
      delay(200);
    }
  }
  
 
  
  delay(125);
}