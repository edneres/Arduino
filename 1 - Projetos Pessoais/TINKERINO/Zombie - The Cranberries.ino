//////////////////
//   EDIVÂNIA   //
//     UFPI     //
//   29/01/23   //
//////////////////

#define NOTE_E2  82.400 
#define NOTE_G2  98.868
#define NOTE_C2  132.000  
#define NOTE_D3  146.850
#define NOTE_A2  110.000 
#define NOTE_Fcharp2 93.324
#define NOTE_B2  124.610
#define NOTE_E3  166.320
 
void setup()
{
  pinMode(6, OUTPUT);
}

void loop()
{
	// NOTE_E2 (6x) //
    tone(6, NOTE_E2, 333.333);
    delay(500);
    tone(6, NOTE_E2, 333.333);
    delay(500);
    tone(6, NOTE_E2, 333.333);
    delay(500);
    tone(6, NOTE_E2, 333.333);
    delay(500);
    tone(6, NOTE_E2, 333.333);
    delay(500);
     tone(6, NOTE_E2, 333.333);
    delay(500);
  
    // NOTE_G2 (1x) //
    tone(6, NOTE_G2, 333.333);
    delay(500);

    // NOTE_E2 (1x) //
    tone(6, NOTE_E2, 333.333);
    delay(500);

    // NOTE_C2 (6x) //
    tone(6, NOTE_C2, 333.333);
    delay(500);
    tone(6, NOTE_C2, 333.333);
    delay(500);
    tone(6, NOTE_C2, 333.333);
    delay(500);
    tone(6, NOTE_C2, 333.333);
    delay(500);
    tone(6, NOTE_C2, 333.333);
    delay(500);
    tone(6, NOTE_C2, 333.333);
    delay(500);

    // NOTE_D3 (1x) //
    tone(6, NOTE_D3, 333.333);
    delay(500);

    // NOTE_C2 (1x) //
    tone(6, NOTE_C2, 333.333);
    delay(500);

    // NOTE_G2 (6x) //
    tone(6, NOTE_G2, 333.333);
    delay(500);
    tone(6, NOTE_G2, 333.333);
    delay(500);
    tone(6, NOTE_G2, 333.333);
    delay(500);
    tone(6, NOTE_G2, 333.333);
    delay(500);
    tone(6, NOTE_G2, 333.333);
    delay(500);
    tone(6, NOTE_G2, 333.333);
    delay(500);

    // NOTE_A2 (1x) //
    tone(6, NOTE_A2, 333.333);
    delay(500);

    // NOTE_G2 (1x) //
    tone(6, NOTE_G2, 333.333);
    delay(500);

    // NOTE_Fcharp2 (5x) //
    tone(6, NOTE_Fcharp2, 333.333);
    delay(500);
    tone(6, NOTE_Fcharp2, 333.333);
    delay(500);
    tone(6, NOTE_Fcharp2, 333.333);
    delay(500);
    tone(6, NOTE_Fcharp2, 333.333);
    delay(500);
    tone(6, NOTE_Fcharp2, 333.333);
    delay(500);

    // NOTE_G2 (1x) //
    tone(6, NOTE_G2, 333.333);
    delay(500);

    // NOTE_Fcharp2 (1x) //
    tone(6, NOTE_Fcharp2, 333.333);
    delay(500);

    // NOTE_G2 (1x) //
    tone(6, NOTE_G2, 333.333);
    delay(500);
}