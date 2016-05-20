#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <unistd.h> //do zmiany pod Linux (unistd.h)

#include "city.h"

using namespace std;

int main()
{
    srand(time(NULL));
    bool theend = false;
    city wro;
    wro.raport();
    while(theend == false)
    {
        usleep(1000);
        wro.turn();
        wro.raport();

        if(wro.week==10) theend = true;
    }


}
