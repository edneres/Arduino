//////////////
// EDIVÂNIA //
//   UFPI   //
//   2022   //
//////////////

int b1 = 5;
int b2 = 6;
int r1 = 3;
int r2 = 4;
int e1 = 0;
int e2 = 0;

void setup()
{
  pinMode(b1, INPUT);
  pinMode(b2, INPUT);
  pinMode(r1, OUTPUT);
  pinMode(r2, OUTPUT);
}

void loop()
{
  e1 = digitalRead(b1);
  e2 = digitalRead(b2);
  
  if(e1==1){
    digitalWrite(r1,1);
    digitalWrite(r2,0);
  }
  if(e2==1){
    digitalWrite(r1,0);
    digitalWrite(r2,1);
  }
}