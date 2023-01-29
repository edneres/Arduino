//////////////////
//   EDIVÂNIA   //
//     UFPI     //
//   27/01/23   //
//////////////////

int estado, mod = 0;

void setup() 
{
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, INPUT);
}

void modo(int mod)
{
    while(mod == 1)
    {
      digitalWrite(5, HIGH);
      delay(500);

      digitalWrite(5, LOW);
      digitalWrite(6, HIGH);
      delay(500);

      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
      delay(500);
      digitalWrite(7, LOW);

      estado = digitalRead(8);

      if(estado == 1)
      {
        mod++;

        modo(mod);
      }
    }

    while(mod == 2)
    {
      digitalWrite(5, HIGH);
      delay(250);

      digitalWrite(5, LOW);
      digitalWrite(6, HIGH);
      delay(250);

      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
      delay(250);
      digitalWrite(7, LOW);

      estado = digitalRead(8);

      if(estado == 1)
      {
        mod++;

        modo(mod);
      }
    }

    while(mod == 3)
    {
      digitalWrite(5, HIGH);
      delay(125);

      digitalWrite(5, LOW);
      digitalWrite(6, HIGH);
      delay(125);

      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
      delay(125);
      digitalWrite(7, LOW);

      estado = digitalRead(8);

      if(estado == 1)
      {
        mod++;

        modo(mod);
      }
    }

    while(mod == 4)
    {
      digitalWrite(5, HIGH);
      delay(500);

      digitalWrite(5, LOW);
      digitalWrite(6, HIGH);
      delay(500);

      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
      delay(500);
      digitalWrite(7, LOW);

      digitalWrite(6, HIGH);
      delay(500);
      digitalWrite(6, LOW);

      estado = digitalRead(8);

      if(estado == 1)
      {
        mod++;

        modo(mod);
      }
    }

    while(mod == 5)
    {
      digitalWrite(5, HIGH);
      delay(250);

      digitalWrite(5, LOW);
      digitalWrite(6, HIGH);
      delay(250);

      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
      delay(250);
      digitalWrite(7, LOW);

      digitalWrite(6, HIGH);
      delay(250);
      digitalWrite(6, LOW);

      estado = digitalRead(8);

      if(estado == 1)
      {
        mod++;

        modo(mod);
      }
    }

    while(mod == 6)
    {
      digitalWrite(5, HIGH);
      delay(125);

      digitalWrite(5, LOW);
      digitalWrite(6, HIGH);
      delay(125);

      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
      delay(125);
      digitalWrite(7, LOW);

      digitalWrite(6, HIGH);
      delay(125);
      digitalWrite(6, LOW);

      estado = digitalRead(8);

      if(estado == 1)
      {
        mod++;

        modo(mod);
      }
    }

    while(mod == 7)
    {
      digitalWrite(5, HIGH);
      delay(500);
      digitalWrite(6, HIGH);
      delay(500);
      digitalWrite(7, HIGH);
      delay(500);

      digitalWrite(5, LOW);
      delay(500);
      digitalWrite(6, LOW);
      delay(500);
      digitalWrite(7, LOW);
      delay(500);

      estado = digitalRead(8);

      if(estado == 1)
      {
        mod++;

        modo(mod);
      }
    }

    while(mod == 8)
    {
      digitalWrite(5, HIGH);
      delay(250);
      digitalWrite(6, HIGH);
      delay(250);
      digitalWrite(7, HIGH);
      delay(250);

      digitalWrite(5, LOW);
      delay(250);
      digitalWrite(6, LOW);
      delay(250);
      digitalWrite(7, LOW);
      delay(250);

      estado = digitalRead(8);

      if(estado == 1)
      {
        mod++;

        modo(mod);
      }
    }

    while(mod == 9)
    {
      digitalWrite(5, HIGH);
      delay(125);
      digitalWrite(6, HIGH);
      delay(125);
      digitalWrite(7, HIGH);
      delay(125);

      digitalWrite(5, LOW);
      delay(125);
      digitalWrite(6, LOW);
      delay(125);
      digitalWrite(7, LOW);
      delay(125);

      estado = digitalRead(8);

      if(estado == 1)
      {
        mod++;

        modo(mod);
      }
    }

    while(mod == 10)
    {
      digitalWrite(5, HIGH);
      delay(500);
      digitalWrite(6, HIGH);
      delay(500);
      digitalWrite(7, HIGH);
      delay(500);

      digitalWrite(7, LOW);
      delay(500);
      digitalWrite(6, LOW);
      delay(500);
      digitalWrite(5, LOW);
      delay(500);

      estado = digitalRead(8);

      if(estado == 1)
      {
        mod++;

        modo(mod);
      }
    }

    while(mod == 11)
    {
      digitalWrite(5, HIGH);
      delay(250);
      digitalWrite(6, HIGH);
      delay(250);
      digitalWrite(7, HIGH);
      delay(250);

      digitalWrite(7, LOW);
      delay(250);
      digitalWrite(6, LOW);
      delay(250);
      digitalWrite(5, LOW);
      delay(250);

      estado = digitalRead(8);

      if(estado == 1)
      {
        mod++;

        modo(mod);
      }
    }

    while(mod == 12)
    {
      digitalWrite(5, HIGH);
      delay(125);
      digitalWrite(6, HIGH);
      delay(125);
      digitalWrite(7, HIGH);
      delay(125);

      digitalWrite(7, LOW);
      delay(125);
      digitalWrite(6, LOW);
      delay(125);
      digitalWrite(5, LOW);
      delay(125);

      estado = digitalRead(8);

      if(estado == 1)
      {
        mod = 1;

        modo(mod);
      }
    }
}

void loop() 
{
  estado = digitalRead(8);

  if(estado == 1)
  {
    mod++;

    modo(mod);
  }

  delay(300);
}