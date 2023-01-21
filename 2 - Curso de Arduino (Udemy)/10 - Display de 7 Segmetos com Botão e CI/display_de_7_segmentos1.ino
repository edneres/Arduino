//////////////
// EDIVÂNIA //
//   UFPI   //
//   2022   //
//////////////

int bot = 2, A = 3, B = 4, C = 5, D = 6;
int es, cont = -1;

void setup()
{
  pinMode(bot, INPUT);
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  
  Serial.begin(6600);
}

void loop()
{
  es = digitalRead(bot);
  
  if(es == 1)
  {
    cont++;
    
    if(cont > 9)
      cont = 0;
  }  
  
  switch(cont)
  {
    case 0:
    	digitalWrite(A, 0);
    	digitalWrite(B, 0);
    	digitalWrite(C, 0);
    	digitalWrite(D, 0);
    	Serial.println("Contagem = 0");
    break;
    
    case 1:
    	digitalWrite(A, 1);
    	digitalWrite(B, 0);
    	digitalWrite(C, 0);
    	digitalWrite(D, 0);
    	Serial.println("Contagem = 1");
    break;
    
    case 2:
    	digitalWrite(A, 0);
    	digitalWrite(B, 1);
    	digitalWrite(C, 0);
    	digitalWrite(D, 0);
    	Serial.println("Contagem = 2");
    break;
    
    case 3:
    	digitalWrite(A, 1);
    	digitalWrite(B, 1);
    	digitalWrite(C, 0);
    	digitalWrite(D, 0);
    	Serial.println("Contagem = 3");
    break;
    
    case 4:
    	digitalWrite(A, 0);
    	digitalWrite(B, 0);
    	digitalWrite(C, 1);
    	digitalWrite(D, 0);
    	Serial.println("Contagem = 4");
    break;
    
    case 5:
    	digitalWrite(A, 1);
    	digitalWrite(B, 0);
    	digitalWrite(C, 1);
    	digitalWrite(D, 0);
    	Serial.println("Contagem = 5");
    break;
    
    case 6:
    	digitalWrite(A, 0);
    	digitalWrite(B, 1);
    	digitalWrite(C, 1);
    	digitalWrite(D, 0);
    	Serial.println("Contagem = 6");
    break;
    
    case 7:
    	digitalWrite(A, 1);
    	digitalWrite(B, 1);
    	digitalWrite(C, 1);
    	digitalWrite(D, 0);
    	Serial.println("Contagem = 7");
    break;
    
    case 8:
    	digitalWrite(A, 0);
    	digitalWrite(B, 0);
    	digitalWrite(C, 0);
    	digitalWrite(D, 1);
    	Serial.println("Contagem = 8");
    break;
    
    case 9:
    	digitalWrite(A, 1);
    	digitalWrite(B, 0);
    	digitalWrite(C, 0);
    	digitalWrite(D, 1);
    	Serial.println("Contagem = 9");
    break;
  }
  
  delay(300);
}