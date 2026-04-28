#include "src\EyesAnimations.h"

char OTFG = ' ';  // Olho Totalmente Fechado Geral (ou usar o lcd.clear())

int dt = 100;

void setup() {
  start_lcd();
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

