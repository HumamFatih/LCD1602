/*
 * CLcdTest.h
 *
 *  Created on: Apr 30, 2024
 *      Author: humam
 */

#ifndef SRC_CLCDTEST_H_
#define SRC_CLCDTEST_H_
#include "CLcd1602.h"

/**
 * Models an application class for the test of CLcd1602 class.
 */
class CLcdTest {
public:
	/**
	 * Implement the test program for the LCD. The first test is initialization
	 * of LCD. The second test is to show the student's name and number in the
	 * middle of LCD
	 */
	void run();
};

/**
 * Declares an external C function 'runLcdTest'
 */
extern "C" void runLcdTest() {
	CLcdTest().run();
}

#endif /* SRC_CLCDTEST_H_ */
