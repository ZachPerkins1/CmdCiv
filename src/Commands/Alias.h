/*
 * Alias.h
 *
 *  Created on: Feb 19, 2015
 *      Author: zach
 */

#ifndef SRC_COMMANDS_ALIAS_H_
#define SRC_COMMANDS_ALIAS_H_

#include <string>
#include "Command.h"

#define string std::string

class Alias {
public:
	Alias(string alias, Command* command);
	virtual ~Alias();

	string* get();
	void executeCommand(string[]);
};

#endif /* SRC_COMMANDS_ALIAS_H_ */
