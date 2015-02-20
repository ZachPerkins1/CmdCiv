/*
 * GameManager.h
 *
 *  Created on: Feb 19, 2015
 *      Author: zach
 */

#ifndef SRC_GAMEMANAGER_H_
#define SRC_GAMEMANAGER_H_

#include <cstdio>
#include <iostream>

#include "CommandDispatcher.h"
#include "Commands/CommandMap.h"

#define string std::string

class GameManager : public CommandDispatcher {
public:
	GameManager();
	virtual ~GameManager();

	static GameManager* getInstance();

	void addAliases(CommandMap* map);
private:
	static GameManager* instance;

};

#endif /* SRC_GAMEMANAGER_H_ */
