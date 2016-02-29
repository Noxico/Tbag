#ifndef COMMAND_H_
#define COMMAND_H_

#include <iostream>

using namespace std;

class Command
{
private:
	string word1 = NULL, word2 = NULL;
public:
	Command(string word1, string word2);
	Command(string command);
	string getWord1();
	string getWord2();
	bool isUnknown();
	bool hasSecondWord();
};

#endif
