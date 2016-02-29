#ifndef COMMANDWORDS_H_
#define COMMANDWORDS_H_

#include <iostream>
#include <string>

using namespace std;
class CommandWords
{
	string commandWords[8] =
	{ "quit", "help", "go", "north", "south", "east", "west", "pickup" };
public:
	CommandWords();
	bool isValidCommand(string command);
	string validCommands();
};

#endif
