#include <Servo.h>
Servo myservoA;
Servo myservoB;
Servo myservoC;
Servo myservoD;
Servo myservoE;
Servo myservoF;
Servo myservoG;

int A_Pos_raus = 180,
    A_Pos_rein = 0,
    B_Pos_raus = 180,
    B_Pos_rein = 0,
    C_Pos_raus = 180,
    C_Pos_rein = 0,
    D_Pos_raus = 180,
    D_Pos_rein = 0,
    E_Pos_raus = 180,
    E_Pos_rein = 0,
    F_Pos_raus = 180,
    F_Pos_rein = 0,
    G_Pos_raus = 0,     // Reverse
    G_Pos_rein = 180;   // Reverse

int A = 0;    // LED's
int B = 1;
int C = 9;
int D = 10;
int E = 11;
int F = 12;
int G = 13;

int Delay0 = 1000;  // hex Ziffer
int Delay1 = 2000;  // Buchstaben
int Delay2 = 3000;
int Delay3 = 750;

// --------------------------------------------------------------

void LEDsterunern(){
  // A
  int speicherA = myservoA.read();
  if(speicherA >= 100){
    digitalWrite(A, HIGH);
  }
  else{
    digitalWrite(A, LOW);
  }
  
  // B
  int speicherB = myservoB.read();
  if(speicherB >= 100){
    digitalWrite(B, HIGH);
  }
  else{
    digitalWrite(B, LOW);
  }
  
  // C
  int speicherC = myservoC.read();
  if(speicherC >= 100){
    digitalWrite(C, HIGH);
  }
  else{
    digitalWrite(C, LOW);
  }
  
  // D
  int speicherD = myservoD.read();
  if(speicherD >= 100){
    digitalWrite(D, HIGH);
  }
  else{
    digitalWrite(D, LOW);
  }
  
  // E
  int speicherE = myservoE.read();
  if(speicherE >= 100){
    digitalWrite(E, HIGH);
  }
  else{
    digitalWrite(E, LOW);
  }
  
  // F
  int speicherF = myservoF.read();
  if(speicherF >= 100){
    digitalWrite(F, HIGH);
  }
  else{
    digitalWrite(F, LOW);
  }
  
  // G
  int speicherG = myservoG.read();
  if(speicherG <= 90){
    digitalWrite(G, HIGH);
  }
  else{
    digitalWrite(G, LOW);
  }
}

// --------------------------------------------------------------

void setup() {
  myservoA.attach(2);   // Pin für Servo
  myservoB.attach(3);
  myservoC.attach(4);
  myservoD.attach(5);
  myservoE.attach(6);
  myservoF.attach(7);
  myservoG.attach(8);
  Nix();
  pinMode(A,OUTPUT);
  pinMode(B,OUTPUT);
  pinMode(C,OUTPUT);
  pinMode(D,OUTPUT);
  pinMode(E,OUTPUT);
  pinMode(F,OUTPUT);
  pinMode(G,OUTPUT);
}

void loop() {
  Null_Neun(Delay0);
  Nix();
  
  delay(Delay2);
  
  Nix_Neun(Delay0);
  Nix();

  delay(Delay2);
  
  HELLO(Delay3);
  Nix();
  
  delay(Delay2);

  OPEN(Delay1);
  Nix();

  delay(Delay2);

  CLOSE(Delay1);
  Nix();

  delay(Delay2);

  PLAY(Delay1);
  Nix();

  delay(Delay2);

  LOAD(Delay1);
  Nix();

  delay(Delay2);

  OFF(Delay1);
  Nix();

  delay(Delay2);

  ABC(Delay3);
  Nix();

  delay(Delay2);
}
