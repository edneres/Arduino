//////////////
// EDIVÂNIA //
//   UFPI   //
//   2022   //
//////////////

int l1 = 5, l2 = 6, l3 = 7, l4 = 4;
int potpin1 = A0, potpin2 = A1;
int potval1,potval2;

void setup()
{
  pinMode(l1, OUTPUT);
  pinMode(l2, OUTPUT);
  pinMode(l3, OUTPUT);
  pinMode(l4, OUTPUT);
  
  Serial.begin(6600);
}

void modo(int pot, int time);

void loop()
{
  potval1 = analogRead(potpin1);
  potval2= analogRead(potpin2);
  //delay(500);
  Serial.print("M = ");
  Serial.print(potval1);
  Serial.print("  D = ");
  Serial.println(potval2);
  
  modo(potval1, potval2);
  
}

void modo(int pot, int time)
{
  if (pot == 164)
  {
    digitalWrite(l1, 1);
   	delay(time);
    
    digitalWrite(l1, 0);
    digitalWrite(l2, 1);
   	delay(time);
    
    digitalWrite(l2, 0);
    digitalWrite(l3, 1);
   	delay(time);
    
    digitalWrite(l3, 0);
    digitalWrite(l4, 1);
   	delay(time);
    
    digitalWrite(l4, 0);
  }
  
  if (pot == 327)
  {
    digitalWrite(l1, 1);
    digitalWrite(l4, 1);
   	delay(time);
    
    digitalWrite(l1, 0);
    digitalWrite(l4, 0);
   	delay(time);
    
    digitalWrite(l2, 1);
    digitalWrite(l3, 1);
   	delay(time);
    
    digitalWrite(l2, 0);
    digitalWrite(l3, 0);
   	delay(time);
    
    digitalWrite(l2, 1);
    digitalWrite(l3, 1);
   	delay(time);
    
    digitalWrite(l2, 0);
    digitalWrite(l3, 0);
   	delay(time);
    
    digitalWrite(l1, 1);
    digitalWrite(l4, 1);
   	delay(time);
    
    digitalWrite(l1, 0);
    digitalWrite(l4, 0);
  }
  
  else
  {
    digitalWrite(l1, 0);
    digitalWrite(l2, 0);
    digitalWrite(l3, 0);
    digitalWrite(l4, 0);
  }
}