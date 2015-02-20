/*
 * IOManager.h
 *
 *  Created on: Feb 20, 2015
 *      Author: Zach
 */

#ifndef SRC_IOMANAGER_H_
#define SRC_IOMANAGER_H_

#include <iostream>
#include <string>

#define string std::string

namespace io {
	void println(string line);
	void print(string words);
	void warn(string warning);

	string readLine();

	void clearScreen();
	void setScreenClearAmount(uint32_t amount);
}

#endif /* SRC_IOMANAGER_H_ */
