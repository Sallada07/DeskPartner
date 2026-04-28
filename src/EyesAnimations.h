#ifndef _EYESANIMATIONS_H
    #define _EYESANIMATIONS_H

    #include <Arduino.h>
    #include <LiquidCrystal_I2C.h>
    #include <Wire.h>
    
    
    void start_lcd();
    void eyes_start_front();
    void eyes_start_right();
    void eyes_start_left();

    /// Neutral
    void open_eyes_front_neutral(int time = 500);
    void open_eyes_right_neutral(int time = 500);
    void open_eyes_left_neutral(int time = 500);
    void close_eyes_front_neutral(int time = 500);
    void close_eyes_right_neutral(int time = 500);
    void close_eyes_left_neutral(int time = 500);
    void blink_eyes_front_neutral();
    void blink_eyes_right_neutral();
    void blink_eyes_left_neutral();
    void look_from_front_to_right_neutral();
    void look_from_right_to_front_neutral();
    void look_from_front_to_left_neutral();
    void look_from_left_to_front_neutral();
    void look_from_left_to_right_neutral();
    void look_from_right_to_left_neutral();

    /// Sad
    void open_eyes_front_sad(int time = 500);
    void open_eyes_right_sad(int time = 500);
    void open_eyes_left_sad(int time = 500);
    void close_eyes_front_sad(int time = 500);
    void close_eyes_right_sad(int time = 500);
    void close_eyes_left_sad(int time = 500);
    void blink_eyes_front_sad();
    void blink_eyes_right_sad();
    void blink_eyes_left_sad();
    void look_from_front_to_right_sad();
    void look_from_right_to_front_sad();
    void look_from_front_to_left_sad();
    void look_from_left_to_front_sad();
    void look_from_left_to_right_sad();
    void look_from_right_to_left_sad();

    /// Happy
    void open_eyes_front_happy(int time = 500);
    void open_eyes_right_happy(int time = 500);
    void open_eyes_left_happy(int time = 500);
    void close_eyes_front_happy(int time = 500);
    void close_eyes_right_happy(int time = 500);
    void close_eyes_left_happy(int time = 500);
    void blink_eyes_front_happy();
    void blink_eyes_right_happy();
    void blink_eyes_left_happy();
    void look_from_front_to_right_happy();
    void look_from_right_to_front_happy();
    void look_from_front_to_left_happy();
    void look_from_left_to_front_happy();
    void look_from_left_to_right_happy();
    void look_from_right_to_left_happy();

#endif