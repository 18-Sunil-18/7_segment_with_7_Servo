void Minus(){
  myservoA.write(A_Pos_rein);  // -
  myservoB.write(B_Pos_rein);
  myservoC.write(C_Pos_rein);
  myservoD.write(D_Pos_rein);
  myservoE.write(E_Pos_rein);
  myservoF.write(F_Pos_rein);
  myservoG.write(G_Pos_raus);
  LEDsterunern();
}

void Unterschrich(){
  myservoA.write(A_Pos_rein);    // _
  myservoB.write(B_Pos_rein);
  myservoC.write(C_Pos_rein);
  myservoD.write(D_Pos_raus);
  myservoE.write(E_Pos_rein);
  myservoF.write(F_Pos_rein);
  myservoG.write(G_Pos_rein);
  LEDsterunern();
}

void Anfuehrungszeichen(){
  myservoA.write(A_Pos_rein);    // "
  myservoB.write(B_Pos_raus);
  myservoC.write(C_Pos_rein);
  myservoD.write(D_Pos_rein);
  myservoE.write(E_Pos_rein);
  myservoF.write(F_Pos_raus);
  myservoG.write(G_Pos_rein);
  LEDsterunern();
}

void Apostroph(){
  myservoA.write(A_Pos_rein);    // '
  myservoB.write(B_Pos_rein);
  myservoC.write(C_Pos_rein);
  myservoD.write(D_Pos_rein);
  myservoE.write(E_Pos_rein);
  myservoF.write(F_Pos_raus);
  myservoG.write(G_Pos_rein);
  LEDsterunern();
}

void Istgleich(){
  myservoA.write(A_Pos_rein);    // =
  myservoB.write(B_Pos_rein);
  myservoC.write(C_Pos_rein);
  myservoD.write(D_Pos_raus);
  myservoE.write(E_Pos_rein);
  myservoF.write(F_Pos_rein);
  myservoG.write(G_Pos_raus);
  LEDsterunern();
}

void KlammerAuf(){
  myservoA.write(A_Pos_raus);    // [
  myservoB.write(B_Pos_rein);
  myservoC.write(C_Pos_rein);
  myservoD.write(D_Pos_raus);
  myservoE.write(E_Pos_raus);
  myservoF.write(F_Pos_raus);
  myservoG.write(G_Pos_rein);
  LEDsterunern();
}

void KlammerZu(){
  myservoA.write(A_Pos_raus);    // ]
  myservoB.write(B_Pos_raus);
  myservoC.write(C_Pos_raus);
  myservoD.write(D_Pos_raus);
  myservoE.write(E_Pos_rein);
  myservoF.write(F_Pos_rein);
  myservoG.write(G_Pos_rein);
  LEDsterunern();
}

void Nix(){
  myservoA.write(A_Pos_rein);    // Nix
  myservoB.write(B_Pos_rein);
  myservoC.write(C_Pos_rein);
  myservoD.write(D_Pos_rein);
  myservoE.write(E_Pos_rein);
  myservoF.write(F_Pos_rein);
  myservoG.write(G_Pos_rein);
  LEDsterunern();
}
