#include "GameDie.h"
#include <iostream>
#include <cstdlib>

int main()
{
	int number;
	int faces;
	cout<<"Number of faces: ";
	cin>>faces;
	GameDie game(faces);
	number = game.roll();
	cout << number << endl;
	return 0;
}