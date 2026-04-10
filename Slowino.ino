#include <Wire.h>
#include "src\EyesCharacters\src\EyesCharacters.h"
#include <LiquidCrystal_I2C.h>

// Endereço I2C mais comum: 0x27
// Se não funcionar, tente 0x3F
LiquidCrystal_I2C lcd(0x27, 16, 2);


char OTFG = ' ';  // Olho Totalmente Fechado Geral (ou usar o lcd.clear())


void two_eyes_front(byte Q1, byte Q2, byte Q3, byte Q4){
  lcd.setCursor(5, 0);
  lcd.write(Q1);
  lcd.write(Q2);

  lcd.setCursor(9, 0);
  lcd.write(Q1);
  lcd.write(Q2);

  lcd.setCursor(5, 1);
  lcd.write(Q3);
  lcd.write(Q4);

  lcd.setCursor(9, 1);
  lcd.write(Q3);
  lcd.write(Q4);
}

void two_eyes_right(byte Q1, byte Q2, byte Q3, byte Q4){
  lcd.setCursor(8, 0);
  lcd.write(Q1);
  lcd.write(Q2);

  lcd.setCursor(11, 0);
  lcd.write(Q1);
  lcd.write(Q2);

  lcd.setCursor(8, 1);
  lcd.write(Q3);
  lcd.write(Q4);

  lcd.setCursor(11, 1);
  lcd.write(Q3);
  lcd.write(Q4);
}

void two_eyes_left(byte Q1, byte Q2, byte Q3, byte Q4){
  lcd.setCursor(3, 0);
  lcd.write(Q1);
  lcd.write(Q2);

  lcd.setCursor(6, 0);
  lcd.write(Q1);
  lcd.write(Q2);

  lcd.setCursor(3, 1);
  lcd.write(Q3);
  lcd.write(Q4);

  lcd.setCursor(6, 1);
  lcd.write(Q3);
  lcd.write(Q4);
}

void eyes_start_front(){
  lcd.createChar(0, OCF1);
  lcd.createChar(1, OCF2);
  lcd.createChar(2, OCF3);
  lcd.createChar(3, OCF4);
  lcd.createChar(4, OCM1);
  lcd.createChar(5, OCM2);
  lcd.createChar(6, OCM3);
  lcd.createChar(7, OCM4);
  lcd.clear();
}

void eyes_start_right(){
  lcd.createChar(0, ODF1);
  lcd.createChar(1, ODF2);
  lcd.createChar(2, ODF3);
  lcd.createChar(3, ODF4);
  lcd.createChar(4, ODM1);
  lcd.createChar(5, ODM2);
  lcd.createChar(6, ODM3);
  lcd.createChar(7, ODM4);
  lcd.clear();
}

void eyes_start_left(){
  lcd.createChar(0, OEF1);
  lcd.createChar(1, OEF2);
  lcd.createChar(2, OEF3);
  lcd.createChar(3, OEF4);
  lcd.createChar(4, OEM1);
  lcd.createChar(5, OEM2);
  lcd.createChar(6, OEM3);
  lcd.createChar(7, OEM4);
  lcd.clear();
}

////////////////////////////////////// Neutral  OXF1234 --> OXM1234 --> OXA1234 
//                                      Memory:    0123   +    4567   !    0123  

void open_eyes_front_neutral(int time = 500){
  two_eyes_front(0, 1, 2, 3);
  delay(time);

  two_eyes_front(4, 5, 6, 7);
  delay(time);

  lcd.createChar(0, OCA1);
  lcd.createChar(1, OCA2);
  lcd.createChar(2, OCA3);
  lcd.createChar(3, OCA4);

  two_eyes_front(0, 1, 2, 3);
}

void open_eyes_right_neutral(int time = 500){
  two_eyes_right(0, 1, 2, 3);
  delay(time);

  two_eyes_right(4, 5, 6, 7);
  delay(time);

  lcd.createChar(0, ODA1);
  lcd.createChar(1, ODA2);
  lcd.createChar(2, ODA3);
  lcd.createChar(3, ODA4);

  two_eyes_right(0, 1, 2, 3);
}

void open_eyes_left_neutral(int time = 500){
  two_eyes_left(0, 1, 2, 3);
  delay(time);

  two_eyes_left(4, 5, 6, 7);
  delay(time);

  lcd.createChar(0, OEA1);
  lcd.createChar(1, OEA2);
  lcd.createChar(2, OEA3);
  lcd.createChar(3, OEA4);

  two_eyes_left(0, 1, 2, 3);
}

void close_eyes_front_neutral(int time = 500){
  two_eyes_front(4, 5, 6, 7);
  delay(time);

  lcd.createChar(0, OCF1);
  lcd.createChar(1, OCF2);
  lcd.createChar(2, OCF3);
  lcd.createChar(3, OCF4);

  two_eyes_front(0, 1, 2, 3);
  delay(time);

  lcd.clear();
}

void close_eyes_right_neutral(int time = 500){
  two_eyes_right(4, 5, 6, 7);
  delay(time);

  lcd.createChar(0, ODF1);
  lcd.createChar(1, ODF2);
  lcd.createChar(2, ODF3);
  lcd.createChar(3, ODF4);

  two_eyes_right(0, 1, 2, 3);
  delay(time);

  lcd.clear();
}

void close_eyes_left_neutral(int time = 500){
  two_eyes_left(4, 5, 6, 7);
  delay(time);

  lcd.createChar(0, OEF1);
  lcd.createChar(1, OEF2);
  lcd.createChar(2, OEF3);
  lcd.createChar(3, OEF4);

  two_eyes_left(0, 1, 2, 3);
  delay(time);

  lcd.clear();
}

void blink_eyes_front_neutral(){
  close_eyes_front_neutral(100);
  delay(250);
  open_eyes_front_neutral(100);
}

void blink_eyes_right_neutral(){
  close_eyes_right_neutral(100);
  delay(250);
  open_eyes_right_neutral(100);
}

void blink_eyes_left_neutral(){
  close_eyes_left_neutral(100);
  delay(250);
  open_eyes_left_neutral(100);
}

void look_from_front_to_right_neutral(){
  // close front
  close_eyes_front_neutral(100);
  delay(250);

  // open right
  eyes_start_right();
  open_eyes_right_neutral(100);
}

void look_from_right_to_front_neutral(){
  // close right
  close_eyes_right_neutral(100);
  delay(250);

  // open front
  eyes_start_front();
  open_eyes_front_neutral(100);
}

void look_from_front_to_left_neutral(){
  // close front
  close_eyes_front_neutral(100);
  delay(250);

  // open left
  eyes_start_left();
  open_eyes_left_neutral(100);
}

void look_from_left_to_front_neutral(){
  // close left
  close_eyes_left_neutral(100);
  delay(250);

  // open front
  eyes_start_front();
  open_eyes_front_neutral(100);
}

void look_from_left_to_right_neutral(){
  // close left
  close_eyes_left_neutral(100);
  delay(250);

  // open right
  eyes_start_right();
  open_eyes_right_neutral(100);
}

void look_from_right_to_left_neutral(){
  // close right
  close_eyes_right_neutral(100);
  delay(250);

  // open left
  eyes_start_left();
  open_eyes_left_neutral(100);
}

////////////////////////////////// Sad OXF1234 --> OXM34 --> OXA34 ||| OXM12
//                             Memory:    0123   +    67   !    23  |     45 

void open_eyes_front_sad(int time = 500){
  two_eyes_front(0, 1, 2, 3);
  delay(time);

  two_eyes_front(0, 1, 6, 7);
  delay(time);

  lcd.createChar(2, OCA3);
  lcd.createChar(3, OCA4);

  two_eyes_front(0, 1, 2, 3);
}

void open_eyes_right_sad(int time = 500){
  two_eyes_right(0, 1, 2, 3);
  delay(time);

  two_eyes_right(0, 1, 6, 7);
  delay(time);

  lcd.createChar(2, ODA3);
  lcd.createChar(3, ODA4);

  two_eyes_right(0, 1, 2, 3);
}

void open_eyes_left_sad(int time = 500){
  two_eyes_left(0, 1, 2, 3);
  delay(time);

  two_eyes_left(0, 1, 6, 7);
  delay(time);

  lcd.createChar(2, OEA3);
  lcd.createChar(3, OEA4);

  two_eyes_left(0, 1, 2, 3);
}

void close_eyes_front_sad(int time = 500){
  two_eyes_front(0, 1, 6, 7);
  delay(time);

  lcd.createChar(2, OCF3);
  lcd.createChar(3, OCF4);

  two_eyes_front(0, 1, 2, 3);
  delay(time);

  lcd.clear();
}

void close_eyes_right_sad(int time = 500){
  two_eyes_right(0, 1, 6, 7);
  delay(time);

  lcd.createChar(2, ODF3);
  lcd.createChar(3, ODF4);

  two_eyes_right(0, 1, 2, 3);
  delay(time);

  lcd.clear();
}

void close_eyes_left_sad(int time = 500){
  two_eyes_left(0, 1, 6, 7);
  delay(time);

  lcd.createChar(2, OEF3);
  lcd.createChar(3, OEF4);

  two_eyes_left(0, 1, 2, 3);
  delay(time);

  lcd.clear();
}

void blink_eyes_front_sad(){
  close_eyes_front_sad(100);
  delay(250);
  open_eyes_front_sad(100);
}

void blink_eyes_right_sad(){
  close_eyes_right_sad(100);
  delay(250);
  open_eyes_right_sad(100);
}

void blink_eyes_left_sad(){
  close_eyes_left_sad(100);
  delay(250);
  open_eyes_left_sad(100);
}

void look_from_front_to_right_sad(){
  // close front
  close_eyes_front_sad(100);
  delay(250);

  // open right
  eyes_start_right();
  open_eyes_right_sad(100);
}

void look_from_right_to_front_sad(){
  // close right
  close_eyes_right_sad(100);
  delay(250);

  // open front
  eyes_start_front();
  open_eyes_front_sad(100);
}

void look_from_front_to_left_sad(){
  // close front
  close_eyes_front_sad(100);
  delay(250);

  // open left
  eyes_start_left();
  open_eyes_left_sad(100);
}

void look_from_left_to_front_sad(){
  // close left
  close_eyes_left_sad(100);
  delay(250);

  // open front
  eyes_start_front();
  open_eyes_front_sad(100);
}

void look_from_left_to_right_sad(){
  // close left
  close_eyes_left_sad(100);
  delay(250);

  // open right
  eyes_start_right();
  open_eyes_right_sad(100);
}

void look_from_right_to_left_sad(){
  // close right
  close_eyes_right_sad(100);
  delay(250);

  // open left
  eyes_start_left();
  open_eyes_left_sad(100);
}

////////////////////////////////// Happy OXF1234 --> OXM12 --> OXA12 ||| OXM34
//                               Memory:    0123   +    45   !    01  |     67 

void open_eyes_front_happy(int time = 500){
  two_eyes_front(0, 1, 2, 3);
  delay(time);

  two_eyes_front(4, 5, 2, 3);
  delay(time);

  lcd.createChar(0, OCA1);
  lcd.createChar(1, OCA2);

  two_eyes_front(0, 1, 2, 3);
}

void open_eyes_right_happy(int time = 500){
  two_eyes_right(0, 1, 2, 3);
  delay(time);

  two_eyes_right(4, 5, 2, 3);
  delay(time);

  lcd.createChar(0, ODA1);
  lcd.createChar(1, ODA2);

  two_eyes_right(0, 1, 2, 3);
}

void open_eyes_left_happy(int time = 500){
  two_eyes_left(0, 1, 2, 3);
  delay(time);

  two_eyes_left(4, 5, 2, 3);
  delay(time);

  lcd.createChar(0, OEA1);
  lcd.createChar(1, OEA2);

  two_eyes_left(0, 1, 2, 3);
}

void close_eyes_front_happy(int time = 500){
  two_eyes_front(4, 5, 2, 3);
  delay(time);

  lcd.createChar(0, OCF1);
  lcd.createChar(1, OCF2);

  two_eyes_front(0, 1, 2, 3);
  delay(time);

  lcd.clear();
}

void close_eyes_right_happy(int time = 500){
  two_eyes_right(4, 5, 2, 3);
  delay(time);

  lcd.createChar(0, ODF1);
  lcd.createChar(1, ODF2);

  two_eyes_right(0, 1, 2, 3);
  delay(time);

  lcd.clear();
}

void close_eyes_left_happy(int time = 500){
  two_eyes_left(4, 5, 2, 3);
  delay(time);

  lcd.createChar(0, OEF1);
  lcd.createChar(1, OEF2);

  two_eyes_left(0, 1, 2, 3);
  delay(time);

  lcd.clear();
}

void blink_eyes_front_happy(){
  close_eyes_front_happy(100);
  delay(250);
  open_eyes_front_happy(100);
}

void blink_eyes_right_happy(){
  close_eyes_right_happy(100);
  delay(250);
  open_eyes_right_happy(100);
}

void blink_eyes_left_happy(){
  close_eyes_left_happy(100);
  delay(250);
  open_eyes_left_happy(100);
}

void look_from_front_to_right_happy(){
  // close front
  close_eyes_front_happy(100);
  delay(250);

  // open right
  eyes_start_right();
  open_eyes_right_happy(100);
}

void look_from_right_to_front_happy(){
  // close right
  close_eyes_right_happy(100);
  delay(250);

  // open front
  eyes_start_front();
  open_eyes_front_happy(100);
}

void look_from_front_to_left_happy(){
  // close front
  close_eyes_front_happy(100);
  delay(250);

  // open left
  eyes_start_left();
  open_eyes_left_happy(100);
}

void look_from_left_to_front_happy(){
  // close left
  close_eyes_left_happy(100);
  delay(250);

  // open front
  eyes_start_front();
  open_eyes_front_happy(100);
}

void look_from_left_to_right_happy(){
  // close left
  close_eyes_left_happy(100);
  delay(250);

  // open right
  eyes_start_right();
  open_eyes_right_happy(100);
}

void look_from_right_to_left_happy(){
  // close right
  close_eyes_right_happy(100);
  delay(250);

  // open left
  eyes_start_left();
  open_eyes_left_happy(100);
}

////////////////////////////////// Change

// void get_neutral_from_sad(){

// }

// void get_sad_from_happy(){}

// void get_happy_from_neutral(){}

// void get_neutral_from_happy(){}

// void get_sad_from_neutral(){}

// void get_neutral_from_sad(){}



int dt = 100;

void setup() {
  lcd.init();        
  lcd.backlight();   
  lcd.clear();
  eyes_start_front();
  open_eyes_front_happy();
  delay(500);
}

void loop() {
  blink_eyes_front_happy();
  delay(1000);
  look_from_front_to_left_neutral();
  delay(1000);

  blink_eyes_left_neutral();
  delay(1000);
  look_from_left_to_right_sad();
  delay(1000);

  blink_eyes_right_sad();
  delay(1000);
  look_from_right_to_front_happy();
  delay(1000);

  blink_eyes_front_happy();
  delay(1000);
  look_from_front_to_right_sad();
  delay(1000);

  blink_eyes_right_sad();
  delay(1000);
  look_from_right_to_left_neutral();
  delay(1000);

  blink_eyes_left_neutral();
  delay(1000);
  look_from_left_to_front_happy();
  delay(1000);

  // close_eyes_front_happy(dt);
  // delay(1000);
  // open_eyes_front_sad(dt);
  // delay(1000);
  // close_eyes_front_sad(dt);
  // delay(1000);
  // open_eyes_front_neutral(dt);
  // delay(1000);
  // close_eyes_front_neutral(dt);
  // delay(1000);
  // open_eyes_front_happy(dt);
  // delay(1000);
}












// Pupila -> Caracteres
// Olhar -> Posição
// Humor -> Animação
// 

// void two_eyes(byte Q1, byte Q2, byte Q3, byte Q4, char position = 'F'){
//   """
//   'F' -> Look front
//   'R' -> Look right
//   'L' -> Look left
//   """

//   int p1, p2;
//   switch (position) {
//     case 'F':
//       p1 = 5; p2 = 9;
//       break;

//     case 'R':
//       p1 = 8; p2 = 11;
//       break;

//     case 'L':
//       p1 = 3; p2 = 6;
//       break;

//     default:
//       p1 = 0; p2 = 0;
//       break;
//   }

//   lcd.setCursor(p1, 0);
//   lcd.write(Q1);
//   lcd.write(Q2);

//   lcd.setCursor(p2, 0);
//   lcd.write(Q1);
//   lcd.write(Q2);

//   lcd.setCursor(p1, 1);
//   lcd.write(Q3);
//   lcd.write(Q4);

//   lcd.setCursor(p2, 1);
//   lcd.write(Q3);
//   lcd.write(Q4);
// }
