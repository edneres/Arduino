//////////////
// EDIVÂNIA //
//   UFPI   //
//   2022   //
//////////////

int led1 = 11, led2 = 12, led3 = 13, bot = 2;
int e = 0;

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(bot, INPUT);
}

void loop()
{
  digitalWrite(led1, 1);
  
  e = digitalRead(bot); 
  
  if (e == 1)
  {
    digitalWrite(led1, 1);
    delay(2000); 
    digitalWrite(led1, 0);
    digitalWrite(led2, 1);
    delay(3000);
    digitalWrite(led2, 0);
    digitalWrite(led3, 1); 
    delay(7000);
    digitalWrite(led3, 0);
  }
}