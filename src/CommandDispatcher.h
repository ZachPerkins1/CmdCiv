/*
 * CommandDispatcher.h
 *
 *  Created on: Feb 19, 2015
 *      Author: zach
 */

#ifndef SRC_COMMANDDISPATCHER_H_
#define SRC_COMMANDDISPATCHER_H_

#include <vector>
#include <cstdio>

#include "Commands/Command.h"
#include "Commands/CommandMap.h"

class CommandDispatcher {
public:
	CommandDispatcher();
	virtual ~CommandDispatcher();

	virtual void addAliases(CommandMap* map);

private:
	std::vector<Command*> commandList;
};


#endif /* SRC_COMMANDDISPATCHER_H_ */
