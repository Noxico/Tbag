#ifndef INPUT_H_
#define INPUT_H_

#include <iostream>
#include "../h/Command.h"

using namespace std;

class Input
{

public:
	Input();
	Command handler();
	string validCommands();
};

#endif
