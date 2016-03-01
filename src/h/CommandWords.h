#ifndef COMMANDWORDS_H_
#define COMMANDWORDS_H_

#include <iostream>
#include <string>
#include "../h/StringHandler.h"

using namespace std;
class CommandWords
{
private:
	string commandWords;
	StringHandler sh;
public:
	CommandWords();
	bool isValidCommand(string command);
	string validCommands();
};

#endif
