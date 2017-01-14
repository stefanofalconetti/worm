#include "Arduino.h"
#include <Servo.h>

const int SERIAL_0_SPEED = 9600;
const int SERIAL_1_SPEED = 57600;
const int SERIAL_1_READ_UNTIL_TIMEOUT_MILLIS = 100;

const char COMMAND_DELIMITER = '#';

Servo SERVO_1;
const int SERVO_1_PIN = 2;
const int SERVO_1_MIN_ANGLE = 45;
const int SERVO_1_MAX_ANGLE = 175;
const int SERVO_1_MID_ANGLE = 95;

Servo SERVO_2;
const int SERVO_2_PIN = 3;
const int SERVO_2_MIN_ANGLE = 45;
const int SERVO_2_MAX_ANGLE = 175;
const int SERVO_2_MID_ANGLE = 95;

Servo SERVO_3;
const int SERVO_3_PIN = 4;
const int SERVO_3_MIN_ANGLE = 45;
const int SERVO_3_MAX_ANGLE = 175;
const int SERVO_3_MID_ANGLE = 95;

Servo SERVO_4;
const int SERVO_4_PIN = 5;
const int SERVO_4_MIN_ANGLE = 45;
const int SERVO_4_MAX_ANGLE = 175;
const int SERVO_4_MID_ANGLE = 95;

Servo SERVO_5;
const int SERVO_5_PIN = 8;
const int SERVO_5_MIN_ANGLE = 45;
const int SERVO_5_MAX_ANGLE = 175;
const int SERVO_5_MID_ANGLE = 95;

Servo SERVO_6;
const int SERVO_6_PIN = 9;
const int SERVO_6_MIN_ANGLE = 45;
const int SERVO_6_MAX_ANGLE = 175;
const int SERVO_6_MID_ANGLE = 95;

Servo SERVO_7;
const int SERVO_7_PIN = 10;
const int SERVO_7_MIN_ANGLE = 45;
const int SERVO_7_MAX_ANGLE = 175;
const int SERVO_7_MID_ANGLE = 95;

//The setup function is called once at startup of the sketch
void setup() {
// Add your initialization code here

	initServos();
	setWormPositionTo_FullExtension();
	initRadioSerialPort();
	Serial.begin(SERIAL_0_SPEED);
}

// The loop function is called in an endless loop
void loop() {
//Add your repeated code here
	readSerialMessage();
}

void initServos() {
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
}

void setWormPositionTo_FullExtension() {
	SERVO_1.write(SERVO_1_MID_ANGLE);
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
}

void initRadioSerialPort(){
	Serial1.begin(SERIAL_1_SPEED);
	Serial1.setTimeout(SERIAL_1_READ_UNTIL_TIMEOUT_MILLIS);
}

/**
 * Read a message from the serial line that contains a command to be executed
 */
String readSerialMessage() {

	String commandString;

	if (Serial1.available()) {
		commandString = Serial1.readStringUntil(COMMAND_DELIMITER);
		Serial.print("Received: [" + commandString + "]");
	}
	return commandString;
}
