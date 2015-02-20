/*
 * Command.h
 *
 *  Created on: Feb 19, 2015
 *      Author: zach
 */

#ifndef SRC_COMMANDS_COMMAND_H_
#define SRC_COMMANDS_COMMAND_H_

#include <string>

#define string std::string

class Command {
public:
	Command(string name);
	virtual ~Command();

	void execute(string args[]);
	void displayHelp();

	string getName();
};

#endif /* SRC_COMMANDS_COMMAND_H_ */
