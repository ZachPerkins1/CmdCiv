/*
 * IOManager.cpp
 *
 *  Created on: Feb 20, 2015
 *      Author: Zach
 */

#include "IOManager.h"

uint32_t lineAmount;

void io::print(string words) {
	std::cout << words;
}

void io::println(string line) {
	std::cout << line << std::endl;
}

void io::warn(string warning) {
	std::cout << "[Warning] " << warning << std::endl;
}

string io::readLine() {
	string input;
	std::getline(std::cin, input);
	return input;
}

void io::setScreenClearAmount(uint32_t lines) {
	lineAmount = lines;
}

void io::clearScreen() {
	for (uint32_t x = 0; x < lineAmount; x++) {
		std::cout << std::endl;
	}
}



