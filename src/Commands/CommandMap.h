/*
 * CommandMap.h
 *
 *  Created on: Feb 19, 2015
 *      Author: zach
 */

#ifndef SRC_COMMANDS_COMMANDMAP_H_
#define SRC_COMMANDS_COMMANDMAP_H_

#include <vector>

#include "Alias.h"

class CommandMap {
public:
	CommandMap();
	virtual ~CommandMap();

	void addAlias(string alias, Command* cmd);
private:
	std::vector<Alias*> aliasList;

};

#endif /* SRC_COMMANDS_COMMANDMAP_H_ */
