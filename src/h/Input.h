#ifndef INPUT_H_
#define INPUT_H_

#include <iostream>
#include "../h/Command.h"
#include "../h/CommandWords.h"
#include "../h/StringHandler.h"

using namespace std;

class Input
{
private:
	CommandWords* comWords;
	StringHandler strh;
public:
	Input();
	Command* handler();
	string validCommands();
};

#endif
