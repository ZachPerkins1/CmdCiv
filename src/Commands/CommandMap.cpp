/*
 * CommandMap.cpp
 *
 *  Created on: Feb 19, 2015
 *      Author: zach
 */

#include "CommandMap.h"

CommandMap::CommandMap() {
	// TODO Auto-generated constructor stub

}

CommandMap::~CommandMap() {
	// TODO Auto-generated destructor stub
}

void CommandMap::addAlias(string alias, Command* cmd) {
	aliasList.push_back(new Alias(alias, cmd));
}

