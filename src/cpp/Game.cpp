#include "../h/Game.h"
#include <iostream>

using namespace std;

Game::Game()
{
	play();
}

void Game::play()
{
	bool playing = true;
	while (playing)
	{
		Command* command = input.handler();
		playing = processCommand(command);
		delete command;
	}
	cout << "Thank you for playing." << endl;
}
bool Game::processCommand(Command* command)
{
	// only valid commands get to here becuse i use the input handler
	if (command->isUnknown())
	{
		cout << "Your message was not understood." << endl;
		//currentRoom.getDescription();
		return true;
	}
	else
	{
		if (command->getWord1() == "quit")
			return false;
		if (command->getWord1() == "help")
			printHelp();
		if (command->getWord1() == "north")
		{
			//goRoom("north");
		}

		if (command->getWord1() == "go")
		{

			if (command->hasSecondWord())
			{
				//goRoom(command.getWord2());
			}
			else
			{
				cout << "Please enter the direction you want to go in." << endl;
				//get input for  diretion
				//goroom(that diretion)

			}

		}
	}

	return true;
}

void Game::printHelp()
{
	cout << "Your Help has not ARRiVeD" << endl;
}

