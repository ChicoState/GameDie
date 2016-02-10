#include <iostream>
#include "GameDie.h"
using namespace std;

int main() {
	int k;
	GameDie gd;
	k = gd.roll(); 
	cout << "Number rolled is: " << k << endl;
	return 0;
}
