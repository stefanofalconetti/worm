#include "Arduino.h"
#include <Servo.h>

Servo SERVO_1;
int SERVO_1_PIN = 2;
int SERVO_1_MIN_ANGLE = 45;
int SERVO_1_MAX_ANGLE = 175;
int SERVO_1_MID_ANGLE = 95;

Servo SERVO_2;
int SERVO_2_PIN = 3;
int SERVO_2_MIN_ANGLE = 45;
int SERVO_2_MAX_ANGLE = 175;
int SERVO_2_MID_ANGLE = 95;

Servo SERVO_3;
int SERVO_3_PIN = 4;
int SERVO_3_MIN_ANGLE = 45;
int SERVO_3_MAX_ANGLE = 175;
int SERVO_3_MID_ANGLE = 95;

Servo SERVO_4;
int SERVO_4_PIN = 5;
int SERVO_4_MIN_ANGLE = 45;
int SERVO_4_MAX_ANGLE = 175;
int SERVO_4_MID_ANGLE = 95;

Servo SERVO_5;
int SERVO_5_PIN = 8;
int SERVO_5_MIN_ANGLE = 45;
int SERVO_5_MAX_ANGLE = 175;
int SERVO_5_MID_ANGLE = 95;

Servo SERVO_6;
int SERVO_6_PIN = 9;
int SERVO_6_MIN_ANGLE = 45;
int SERVO_6_MAX_ANGLE = 175;
int SERVO_6_MID_ANGLE = 95;

Servo SERVO_7;
int SERVO_7_PIN = 10;
int SERVO_7_MIN_ANGLE = 45;
int SERVO_7_MAX_ANGLE = 175;
int SERVO_7_MID_ANGLE = 95;

//The setup function is called once at startup of the sketch
void setup() {
// Add your initialization code here
	SERVO_1.attach(SERVO_1_PIN, SERVO_1_MIN_ANGLE, SERVO_1_MAX_ANGLE);
	delay(1000);
	SERVO_2.attach(SERVO_2_PIN, SERVO_2_MIN_ANGLE, SERVO_2_MAX_ANGLE);
	delay(1000);
	SERVO_3.attach(SERVO_3_PIN, SERVO_3_MIN_ANGLE, SERVO_3_MAX_ANGLE);
	delay(1000);
	SERVO_4.attach(SERVO_4_PIN, SERVO_4_MIN_ANGLE, SERVO_4_MAX_ANGLE);
	delay(1000);
	SERVO_5.attach(SERVO_5_PIN, SERVO_5_MIN_ANGLE, SERVO_5_MAX_ANGLE);
	delay(1000);
	SERVO_6.attach(SERVO_6_PIN, SERVO_6_MIN_ANGLE, SERVO_6_MAX_ANGLE);
	delay(1000);
	SERVO_7.attach(SERVO_7_PIN, SERVO_7_MIN_ANGLE, SERVO_7_MAX_ANGLE);

	fullExtension();
}

// The loop function is called in an endless loop
void loop() {
//Add your repeated code here
}

void fullExtension() {
	SERVO_1.write(SERVO_1_MID_ANGLE);
	SERVO_2.write(SERVO_2_MIN_ANGLE);
	SERVO_3.write(SERVO_3_MAX_ANGLE);
	/*
	delay(1000);
	SERVO_2.write(SERVO_2_MID_ANGLE);
	delay(1000);
	SERVO_3.write(SERVO_3_MID_ANGLE);
	delay(1000);
	SERVO_4.write(SERVO_4_MID_ANGLE);
	delay(1000);
	SERVO_5.write(SERVO_5_MID_ANGLE);
	delay(1000);
	SERVO_6.write(SERVO_6_MID_ANGLE);
	delay(1000);
	SERVO_7.write(SERVO_7_MID_ANGLE);
	*/
}
