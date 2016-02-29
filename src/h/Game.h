#ifndef GAME_H_
#define GAME_H_

#include <iostream>
#include "../h/Command.h"

using namespace std;

class Game
{
public:
	Game();
	void play();
	bool processCommand(Command command);
	void goRoom(string direction);
	void printHelp();
};

#endif
