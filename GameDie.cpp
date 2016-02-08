#include <cstdlib>
#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include "GameDie.h"
using namespace std;

//class constructor that seeds the random number generator
GameDie::GameDie()
{
	srand(time(0));
}

//generate a random number between 1-6 (inclusive) and return it
int GameDie::roll()
{


	int die;
	cin >> die;
	if((die < 1)||(die>20))
	{
		cout << "Please enter the integers 1 through 20" << endl;
		
	}else{ 
	cout << rand() %(die - 1) + 1<<endl;
	}
}
