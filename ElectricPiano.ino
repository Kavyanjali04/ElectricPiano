#define NOTE_C 262
#define NOTE_D 294
#define NOTE_E 330
#define NOTE_A 440
#define ACTIVATED LOW
const int PIEZO=11;
const int BUTTON_C=10;
const int BUTTON_D=9;
const int BUTTON_E=8;
const int BUTTON_A=7;
void setup()
{
  pinMode(BUTTON_C,INPUT);
  digitalWrite(BUTTON_C,HIGH);
   pinMode(BUTTON_D,INPUT);
  digitalWrite(BUTTON_D,HIGH);
   pinMode(BUTTON_E,INPUT);
  digitalWrite(BUTTON_E,HIGH);
   pinMode(BUTTON_A,INPUT);
  digitalWrite(BUTTON_A,HIGH);
}
void loop()
{
  while(digitalRead(BUTTON_C)==ACTIVATED)
  {
    tone(PIEZO,NOTE_C);
  }
  while(digitalRead(BUTTON_D)==ACTIVATED)
  {
    tone(PIEZO,NOTE_D);
  }
  while(digitalRead(BUTTON_E)==ACTIVATED)
  {
    tone(PIEZO,NOTE_E);
  }
  while(digitalRead(BUTTON_A)==ACTIVATED)
  {
    tone(PIEZO,NOTE_A);
  }
  noTone(PIEZO);
}