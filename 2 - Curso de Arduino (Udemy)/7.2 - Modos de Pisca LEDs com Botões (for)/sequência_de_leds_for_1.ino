//////////////
// EDIVÂNIA //
//   UFPI   //
//   2022   //
//////////////

#define b1 12
#define b2 11
#define b3 10

int es1, es2, es3, cont = 0, i;

void setup()
{
  pinMode(b1, INPUT);
  pinMode(b2, INPUT);
  pinMode(b3, INPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  
  Serial.begin(6600);
}

void modo(int cont)
{
  switch(cont)
  {
    case 1:
    	Serial.println(">> Modo 1");
    	digitalWrite(7, 1);
    	delay(1000);
    	digitalWrite(7, 0);
    break;
    
    case 2:
    	Serial.println(">> Modo 2");
    	digitalWrite(7, 1);
    	delay(1000);
    	digitalWrite(6, 1);
    	delay(1000);
    
    	digitalWrite(6, 0);
    	delay(1000);
    	digitalWrite(7, 0);
    break;
    
    case 3:
    	Serial.println(">> Modo 3");
    	digitalWrite(7, 1);
    	delay(1000);
    	digitalWrite(6, 1);
    	delay(1000);
    	digitalWrite(5, 1);
    	delay(1000);
    
    	digitalWrite(5, 0);
    	delay(1000);
    	digitalWrite(6, 0);
    	delay(1000);
    	digitalWrite(7, 0);
    break;
    
    case 4:
    	Serial.println(">> Modo 4");
    	digitalWrite(7, 1);
    	delay(1000);
    	digitalWrite(6, 1);
    	delay(1000);
    	digitalWrite(5, 1);
    	delay(1000);
    	digitalWrite(4, 1);
    	delay(1000);
    	
    	digitalWrite(4, 0);
    	delay(1000);
    	digitalWrite(5, 0);
    	delay(1000);
    	digitalWrite(6, 0);
    	delay(1000);
    	digitalWrite(7, 0);
    break;
    
    case 5:
    	Serial.println(">> Modo Especial");
    	for(i = 0; i < 10; i++)
        {
          digitalWrite(7, 1);
          delay(150);
          digitalWrite(6, 1);
          delay(150);
          digitalWrite(5, 1);
          delay(150);
          digitalWrite(4, 1);
          delay(150);

          digitalWrite(4, 0);
          digitalWrite(5, 0);
          digitalWrite(6, 0);
          digitalWrite(7, 0);
          delay(150);
        }
    break;
  }
}

void loop()
{
  es1 = digitalRead(b1);
  es2 = digitalRead(b2);
  es3 = digitalRead(b3);
  
  if(es1 == 1)
  {
    cont++;
    
    if(cont > 5)
      cont = 5;
    
    Serial.print("Contagem = ");
    Serial.println(cont);
  }
  
  if(es2 == 1)
  {
    cont--;
    
    if(cont < 0)
      cont = 0;
    
    Serial.print("Contagem = ");
    Serial.println(cont);
  }
  
  if(es3 == 1)
  	modo(cont);
  
  delay(300);
}














