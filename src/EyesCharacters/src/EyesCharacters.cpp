#include "EyesCharacters.h"

// Caracteres - olhos centro   //  12
                               //  34
byte OCA1[8] = {  // Olho no Centro Aberto quadrante 1
  B00000,
  B00011,
  B00111,
  B00111,
  B01111,
  B01110,
  B01100,
  B01100
};

byte OCA2[8] = {  // Olho no Centro Aberto quadrante 2
  B00000,
  B11000,
  B11100,
  B11100,
  B11110,
  B01110,
  B10110,
  B00110
};

byte OCA3[8] = {  // Olho no Centro Aberto quadrante 3
  B01100,
  B01100,
  B01110,
  B01111,
  B00111,
  B00111,
  B00011,
  B00000
};

byte OCA4[8] = {  // Olho no Centro Aberto quadrante 4
  B00110,
  B00110,
  B01110,
  B11110,
  B11100,
  B11100,
  B11000,
  B00000
};

// Caracteres - olho meio fechado  //  12
                                   //  34
byte OCM1[8] = {  // Olho no Centro Meio aberto quadrante 1
  B00000,
  B00000,
  B00000,
  B00111,
  B01111,
  B01110,
  B01100,
  B01100
};

byte OCM2[8] = {  // Olho no Centro Meio aberto quadrante 2
  B00000,
  B00000,
  B00000,
  B11100,
  B11110,
  B01110,
  B10110,
  B00110
};

byte OCM3[8] = {  // Olho no Centro Meio aberto quadrante 3
  B01100,
  B01100,
  B01110,
  B01111,
  B00111,
  B00000,
  B00000,
  B00000
};

byte OCM4[8] = {  // Olho no Centro Meio aberto quadrante 4
  B00110,
  B00110,
  B01110,
  B11110,
  B11100,
  B00000,
  B00000,
  B00000
};

// Caracteres - olho fechado  //  12
                              //  34
byte OCF1[8] = {  // Olho no Centro Fechado quadrante 1
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B01100,
  B01100
};

byte OCF2[8] = {  // Olho no Centro Fechado quadrante 2
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B10110,
  B00110
};

byte OCF3[8] = {  // Olho no Centro Fechado quadrante 3
  B01100,
  B01100,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000
};

byte OCF4[8] = {  // Olho no Centro Fechado quadrante 4
  B00110,
  B00110,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000
};

// Caracteres - olhos esquerda aberto   //  12
                                        //  34
byte OEA1[8] = {  // Olho para Esquerda Aberto quadrante 1
  B00000,
  B00011,
  B00111,
  B00111,
  B01111,
  B01100,
  B01001,
  B01000
};

byte OEA2[8] = {  // Olho para Esquerda Aberto quadrante 2
  B00000,
  B11000,
  B11100,
  B11100,
  B11110,
  B11110,
  B01110,
  B01110
};

byte OEA3[8] = {  // Olho para Esquerda Aberto quadrante 3
  B01000,
  B01000,
  B01100,
  B01111,
  B00111,
  B00111,
  B00011,
  B00000
};

byte OEA4[8] = {  // Olho para Esquerda Aberto quadrante 4
  B01110,
  B01110,
  B11110,
  B11110,
  B11100,
  B11100,
  B11000,
  B00000
};

// Caracteres - olhos esquerda meio aberto   //  12
                                             //  34
byte OEM1[8] = {  // Olho para Esquerda Meio aberto quadrante 1
  B00000,
  B00000,
  B00000,
  B00111,
  B01111,
  B01100,
  B01001,
  B01000
};

byte OEM2[8] = {  // Olho para Esquerda Meio aberto quadrante 2
  B00000,
  B00000,
  B00000,
  B11100,
  B11110,
  B11110,
  B01110,
  B01110
};

byte OEM3[8] = {  // Olho para Esquerda Meio aberto quadrante 3
  B01000,
  B01000,
  B01100,
  B01111,
  B00111,
  B00000,
  B00000,
  B00000
};

byte OEM4[8] = {  // Olho para Esquerda Meio aberto quadrante 4
  B01110,
  B01110,
  B11110,
  B11110,
  B11100,
  B00000,
  B00000,
  B00000
};

// Caracteres - olhos esquerda meio fechado   //  12
                                              //  34
byte OEF1[8] = {  // Olho para Esquerda meio Fechado quadrante 1
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B01001,
  B01000
};

byte OEF2[8] = {  // Olho para Esquerda meio Fechado quadrante 2
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B01110,
  B01110
};

byte OEF3[8] = {  // Olho para Esquerda meio Fechado quadrante 3
  B01000,
  B01000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000
};

byte OEF4[8] = {  // Olho para Esquerda meio Fechado quadrante 4
  B01110,
  B01110,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000
};

// Caracteres - olhos direita   //  12
                                //  34
byte ODA1[8] = {  // Olho para Direita Aberto quadrante 1
  B00000,
  B00011,
  B00111,
  B00111,
  B01111,
  B01111,
  B01110,
  B01110
};

byte ODA2[8] = {  // Olho para Direita Aberto quadrante 2
  B00000,
  B11000,
  B11100,
  B11100,
  B11110,
  B00110,
  B01010,
  B00010
};

byte ODA3[8] = {  // Olho para Direita Aberto quadrante 3
  B01110,
  B01110,
  B01111,
  B01111,
  B00111,
  B00111,
  B00011,
  B00000
};

byte ODA4[8] = {  // Olho para Direita Aberto quadrante 4
  B00010,
  B00010,
  B00110,
  B11110,
  B11100,
  B11100,
  B11000,
  B00000
};

// Caracteres - olhos direita meio aberto  //  12
                                           //  34
byte ODM1[8] = {  // Olho para Direita Meio aberto quadrante 1
  B00000,
  B00000,
  B00000,
  B00111,
  B01111,
  B01111,
  B01110,
  B01110
};

byte ODM2[8] = {  // Olho para Direita Meio aberto quadrante 2
  B00000,
  B00000,
  B00000,
  B11100,
  B11110,
  B00110,
  B01010,
  B00010
};

byte ODM3[8] = {  // Olho para Direita Meio aberto quadrante 3
  B01110,
  B01110,
  B01111,
  B01111,
  B00111,
  B00000,
  B00000,
  B00000
};

byte ODM4[8] = {  // Olho para Direita Meio aberto quadrante 4
  B00010,
  B00010,
  B00110,
  B11110,
  B11100,
  B00000,
  B00000,
  B00000
};

// Caracteres - olhos direita meio fechado  //  12
                                            //  34
byte ODF1[8] = {  // Olho para Direita meio Fechado quadrante 1
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B01110,
  B01110
};

byte ODF2[8] = {  // Olho para Direita meio Fechado quadrante 2
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B01010,
  B00010
};

byte ODF3[8] = {  // Olho para Direita meio Fechado quadrante 3
  B01110,
  B01110,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000
};

byte ODF4[8] = {  // Olho para Direita meio Fechado quadrante 4
  B00010,
  B00010,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000
};
