#include "../h/CommandWords.h"

CommandWords::CommandWords()
{
	commandWords = "quit help go north south east west pickup";
}

bool CommandWords::isValidCommand(string command)
{
	string holder = "";
	int cmdwrdl = commandWords.length();
	for (int i = 0; i < cmdwrdl; i++)
	{
		if (commandWords.substr(i, 1) != " ") // the value of space
		{
			holder += commandWords.substr(i, 1);
		}
		if (commandWords.substr(i, 1) == " ") // the value of space
		{
			if (sh.caselesscomp(command, holder))
				return true;
			holder = "";

		}

		//cout << commandWord.substr(i, 1) << endl;
	}
	return false;
}
string CommandWords::validCommands()
{

	return commandWords;
}

