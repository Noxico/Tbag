#ifndef GAME_H_
#define GAME_H_

#include <iostream>
#include "../h/Command.h"
#include "../h/Input.h"

using namespace std;

class Game
{
private:
	Input input;
public:
	Game();
	void play();
	bool processCommand(Command* command);
	void goRoom(string direction);
	void printHelp();
};

#endif
