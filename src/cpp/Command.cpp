#include "../h/Command.h"

Command::Command(string word1, string word2)
{
	this->word1 = word1;
	this->word2 = word2;
}
Command::Command(string command)
{
	this->word1 = command;
	this->word2 = "";
}
string Command::getWord1()
{
	return word1;
}
string Command::getWord2()
{
	return word2;
}
bool Command::isUnknown()
{
	return (word1 == "");
}
bool Command::hasSecondWord()
{
	return (word2 != "");
}
