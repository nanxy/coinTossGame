#ifndef COIN_H
#define COIN_H

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>// to use time function

using namespace std;


class Coin
{
private:
    string sideUp;


public:
    Coin()
    {
        srand (time(0));
    };

    string GetsideUp()
    {
        return sideUp;
    }

    int toss(string val) //setSideUp mutator
    {
        int tossing;
        int side;
        tossing= rand() % 100+1;
        if(tossing%2==1)
        {
            side=0;
            return side;
        }
        else
            {
                side=1;
                return side;
            }

    }
    virtual ~Coin() {}

};


#endif // COIN_H
