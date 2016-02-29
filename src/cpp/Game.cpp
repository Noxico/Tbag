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
		cout << "version 0.0.0.0.0.0.0.0.0.0.1 prealpha the prealphaniate" << endl;
		//Command command = input.handler();
		//playing = processCommand(command);
		playing = false;
	}
	cout << "Thank you for playing." << endl;
}

