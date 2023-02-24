#include "GameDie.h"
#include <vector>
#include <cstdlib>
#include <ctime>

//class constructor that seeds the random number generator
GameDie::GameDie()
{
    srand(time(NULL));
    m_counter.resize(m_FACES);
    m_percentages.resize(m_FACES);
    total = 0;

    for(int i=0; i<m_FACES; i++)
    {
        m_counter[i] = 0;
        m_percentages[i] = 0;
    }
      
}

//overloaded constructor
GameDie::GameDie(unsigned int num)
{
    total = 0;

    if( num == 0 )
    {
        m_counter.resize(m_FACES);
        m_percentages.resize(m_FACES);
    }
    else{
        m_counter.resize(num);
        m_percentages.resize(num);
    }
    for(int i=0; i<m_FACES; i++)
    {
        m_counter[i] = 0;
        m_percentages[i] = 0;
    }

}

//generate a random number between 1-n where n is the counter size
// (inclusive) and return it
int GameDie::roll()
{
    int roll = rand() % m_counter.size();
    total++;
    m_counter[roll]++;
    m_percentages[roll] = m_counter[roll] / (double)total;
    return roll + 1;
}

// return the count of how many times each face has been rolled, as a vector
// where each face's count is at index face-1 (i.e. Face 1 is at index 0)
vector <int> GameDie::get_distribution(){
    return m_counter;
}


vector <double> GameDie::get_percentages() {
    return m_percentages;
}
