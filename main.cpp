#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <unistd.h>


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
        sleep(2);
        wro.turn();
        wro.raport();
        wro.event();
        if(wro.week==10) theend = true;
    }
    printf("Koniec symulacji\n");

}
