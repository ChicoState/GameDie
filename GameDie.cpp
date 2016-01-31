#include <cstdlib>
#include <ctime>
#include <stdlib.h>

using namespace std;

//class constructor that seeds the random number generator
GameDie::GameDie()
{
  srand(time(NULL));
}

//generate a random number between 1-6 (inclusive) and return it
int GameDie::roll()
{

 int num;
 num=(rand() %6)+1;
 cout<<"number is---"<<num<<endl;

}
