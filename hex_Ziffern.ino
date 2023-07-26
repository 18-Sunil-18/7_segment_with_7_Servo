void Null(){
  myservoA.write(A_Pos_raus);  // 0
  myservoB.write(B_Pos_raus);
  myservoC.write(C_Pos_raus);
  myservoD.write(D_Pos_raus);
  myservoE.write(E_Pos_raus);
  myservoF.write(F_Pos_raus);
  myservoG.write(G_Pos_rein);
  LEDsterunern();
}

void Eins(){
  myservoA.write(A_Pos_rein);    // 1
  myservoB.write(B_Pos_raus);
  myservoC.write(C_Pos_raus);
  myservoD.write(D_Pos_rein);
  myservoE.write(E_Pos_rein);
  myservoF.write(F_Pos_rein);
  myservoG.write(G_Pos_rein);
  LEDsterunern();
}

void Zwei(){
  myservoA.write(A_Pos_raus);    // 2
  myservoB.write(B_Pos_raus);
  myservoC.write(C_Pos_rein);
  myservoD.write(D_Pos_raus);
  myservoE.write(E_Pos_raus);
  myservoF.write(F_Pos_rein);
  myservoG.write(G_Pos_raus);
  LEDsterunern();
}

void Drei(){
  myservoA.write(A_Pos_raus);    // 3
  myservoB.write(B_Pos_raus);
  myservoC.write(C_Pos_raus);
  myservoD.write(D_Pos_raus);
  myservoE.write(E_Pos_rein);
  myservoF.write(F_Pos_rein);
  myservoG.write(G_Pos_raus);
  LEDsterunern();
}

void Vier(){
  myservoA.write(A_Pos_rein);    // 4
  myservoB.write(B_Pos_raus);
  myservoC.write(C_Pos_raus);
  myservoD.write(D_Pos_rein);
  myservoE.write(E_Pos_rein);
  myservoF.write(F_Pos_raus);
  myservoG.write(G_Pos_raus);
  LEDsterunern();
}

void Fuenf(){
  myservoA.write(A_Pos_raus);    // 5
  myservoB.write(B_Pos_rein);
  myservoC.write(C_Pos_raus);
  myservoD.write(D_Pos_raus);
  myservoE.write(E_Pos_rein);
  myservoF.write(F_Pos_raus);
  myservoG.write(G_Pos_raus);
  LEDsterunern();
}

void Sechs(){
  myservoA.write(A_Pos_raus);    // 6
  myservoB.write(B_Pos_rein);
  myservoC.write(C_Pos_raus);
  myservoD.write(D_Pos_raus);
  myservoE.write(E_Pos_raus);
  myservoF.write(F_Pos_raus);
  myservoG.write(G_Pos_raus);
  LEDsterunern();
}

void Sieben(){
  myservoA.write(A_Pos_raus);    // 7
  myservoB.write(B_Pos_raus);
  myservoC.write(C_Pos_raus);
  myservoD.write(D_Pos_rein);
  myservoE.write(E_Pos_rein);
  myservoF.write(F_Pos_rein);
  myservoG.write(G_Pos_rein);
  LEDsterunern();
}

void Acht(){
  myservoA.write(A_Pos_raus);    // 8
  myservoB.write(B_Pos_raus);
  myservoC.write(C_Pos_raus);
  myservoD.write(D_Pos_raus);
  myservoE.write(F_Pos_raus);
  myservoF.write(E_Pos_raus);
  myservoG.write(G_Pos_raus);
  LEDsterunern();
}

void Neun(){
  myservoA.write(A_Pos_raus);    // 9
  myservoB.write(B_Pos_raus);
  myservoC.write(C_Pos_raus);
  myservoD.write(D_Pos_raus);
  myservoE.write(E_Pos_rein);
  myservoF.write(F_Pos_raus);
  myservoG.write(G_Pos_raus);
  LEDsterunern();
}
