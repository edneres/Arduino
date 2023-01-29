//////////////////
//   EDIVÂNIA   //
//     UFPI     //
//   29/01/23   //
//////////////////

#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988
#define SILENCIO 0

#define t4   2000 			// semibreve (2 segundos)	- 4
#define t2   1000			// mínima    (1 segundo)	- 2
#define t1   500			// semínima  (0,5 segundo)	- 1
#define t05  250			// colcheia (0,25 segundo)	- 1/2
#define t025 125			// semicolcheia (0,125 segundo)	- 1/4

// PINO DE SAÍDA //
#define pino 8

// VELOCIDADE/RITMO DA MÚSICA //
float ritmo = 2;

// VETOR DA SEQUÊNCIA DE NOTAS DA MÚSICA //
int musica[] = 
{
  SILENCIO, NOTE_E4, NOTE_E5, NOTE_C5, 
  NOTE_B4, NOTE_C5, NOTE_B4, NOTE_A4, NOTE_B4, NOTE_B4,
  SILENCIO, NOTE_G4, NOTE_A4, NOTE_G4, NOTE_A4, 
  NOTE_B4, NOTE_E4, NOTE_A4, NOTE_G4, NOTE_E4,
  //
  SILENCIO, NOTE_E5, NOTE_C5, 
  NOTE_B4, NOTE_C5, NOTE_B4, NOTE_A4, NOTE_B4, NOTE_B4,
  SILENCIO, NOTE_G4, NOTE_A4, NOTE_G4, NOTE_A4,
  NOTE_B4, NOTE_E4, NOTE_A4, NOTE_G4, NOTE_E4,
  //
  SILENCIO,NOTE_B4, NOTE_B5, NOTE_C5, 
  NOTE_B4, NOTE_C5,NOTE_B4, NOTE_A4, NOTE_B4, NOTE_B4,
  SILENCIO, NOTE_G4, NOTE_A4, NOTE_G4, NOTE_A4,
  NOTE_B4, NOTE_E4, NOTE_A4, NOTE_G4, NOTE_B4,
  //
  SILENCIO, NOTE_B5, NOTE_C5, 
  NOTE_B4, NOTE_C5, NOTE_B4, NOTE_A4, NOTE_B4, NOTE_B4,
  SILENCIO, NOTE_G4, NOTE_A4, NOTE_G4, NOTE_A4,
  NOTE_B4, NOTE_E4, NOTE_A4, NOTE_G4, NOTE_E4,
  SILENCIO,
  //
  SILENCIO, 
  SILENCIO, NOTE_E4, NOTE_B4, NOTE_B4, NOTE_E4, NOTE_AS4,
  NOTE_E4, NOTE_A4, NOTE_E4, NOTE_G4, NOTE_E4,
  SILENCIO,
  //
  SILENCIO, 
  SILENCIO, NOTE_E4, NOTE_B4, NOTE_B4, NOTE_E4, NOTE_AS4,
  NOTE_E4, NOTE_A4, NOTE_E4, NOTE_G4, NOTE_E4,
  //
  SILENCIO, NOTE_B5, NOTE_C5, 
  NOTE_B4, NOTE_C5, NOTE_B4, NOTE_A4, NOTE_B4, NOTE_B4,
  SILENCIO, NOTE_G4, NOTE_A4, NOTE_G4, NOTE_A4,
  NOTE_B4, NOTE_E4, NOTE_A4, NOTE_G4, NOTE_E4,
  //
  SILENCIO, NOTE_B5, NOTE_C5, 
  NOTE_B4, NOTE_C5, NOTE_B4, NOTE_A4, NOTE_B4, NOTE_B4,
  SILENCIO, NOTE_G4, NOTE_A4, NOTE_G4, NOTE_A4,
  NOTE_B4, NOTE_E4, NOTE_A4, NOTE_G4, NOTE_E4,
  SILENCIO,
  //
  SILENCIO, 
  SILENCIO, NOTE_E4, NOTE_B4, NOTE_B4, NOTE_E4, NOTE_AS4,
  NOTE_E4, NOTE_A4, NOTE_E4, NOTE_G4, NOTE_E4,
  SILENCIO,
  //
  SILENCIO, 
  SILENCIO, NOTE_E4, NOTE_B4, NOTE_B4, NOTE_E4, NOTE_AS4,
  NOTE_E4, NOTE_A4, NOTE_E4, NOTE_G4, NOTE_E4
};

// VETOR DA DURAÇÃO DAS NOTAS DA MÚSICA //
int duracao[] =
{
  t1, t1, t1, t1,
  t05, t05, t05, t05, t1, t1,
  t1, t1, t05, t05, t1,
  t1, t1, t1, t05, t05,
  //
  t2, t1, t1,
  t05, t05, t05, t05, t1, t1,
  t1, t1, t05, t05, t1,
  t1, t1, t1, t05, t05,
  //
  t1, t1, t1, t1,
  t05, t05, t05, t05, t1, t1,
  t1, t1, t05, t05, t1,
  t1, t1, t1, t05, t05,
  //
  t2, t1, t1,
  t05, t05, t05, t05, t1, t1,
  t1, t1, t05, t05, t1,
  t1, t1, t1, t05, t05,
  t4,
  //
  t4, 
  t1, t05, t05, t05, t05, t1,
  t05, t1, t05, t1, t1,
  t4,
  //
  t4, 
  t1, t05, t05, t05, t05, t1,
  t05, t1, t05, t1, t1,
  //
  t2, t1, t1,
  t05, t05, t05, t05, t1, t1,
  t1, t1, t05, t05, t1,
  t1, t1, t1, t05, t05,
  //
  t2, t1, t1,
  t05, t05, t05, t05, t1, t1,
  t1, t1, t05, t05, t1,
  t1, t1, t1, t05, t05,
  t4,
  //
  t4, 
  t1, t05, t05, t05, t05, t1,
  t05, t1, t05, t1, t1,
  t4,
  //
  t4, 
  t1, t05, t05, t05, t05, t1,
  t05, t1, t05, t1, t1
};
  
void setup()
{
  pinMode(pino, OUTPUT);
}

void loop()
{
    for(int nota = 0; nota < (sizeof(musica) / sizeof(int)); nota++)	// sizeof: permite saber o número de bytes ocupado por um determinado tipo de variável.
  	{
      float duracao_nota = duracao[nota] / ritmo;

      tone(pino, musica[nota], duracao_nota);
      delay(duracao_nota*1.5);
      //noTone(pino);
  	}
  
  delay(1000);
}