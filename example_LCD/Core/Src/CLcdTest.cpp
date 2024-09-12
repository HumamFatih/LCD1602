/*
 * CLcdTest.cpp
 *
 *  Created on: Apr 30, 2024
 *      Author: humam
 */

#include "CLcdTest.h"

void CLcdTest::run() {
	// Creates pin and bus object which control the LCD
	CGpioPin lcdRs(GPIOD, 1<<2);
	CGpioPin lcdE(GPIOC, 1<<9);
	CGpioBus lcdBus = CGpioBus().addPin(GPIOA, 1<<11).addPin(GPIOA, 1<<12)
			.addPin(GPIOB, 1<<1).addPin(GPIOB, 1<<2);
	// Creates LCD object
	CLcd1602 lcd(&lcdRs, &lcdE, &lcdBus);

	// first test : Initialization
	lcd.init();
	// Second test : Display the student's name and number in the middle of LCD
	lcd.setCursor(0, 2);
	lcd.write("Fatih  Humam");
	lcd.setCursor(1, 5);
	lcd.write("1116756");

	// Endless loop
	while(true){
	}
}
