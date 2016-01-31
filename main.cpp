#include "GameDie.h"
#include <iostream>
#include <cstdlib>

int main()
{
	int number;
	GameDie game;
	number = game.roll();
	cout << number << endl;
	return 0;
}