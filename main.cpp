#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <unistd.h>

#include "city.h"

using namespace std;

int main()
{
    printf("START SYMULACJI\n");
    srand(time(NULL));
    bool theend = false;
    city wroc;

    while(theend == false)
    {
        sleep(3);
        
        wroc.raport();
        wroc.event();
        wroc.turn();
        
        if(wroc.week > 50){theend = true; printf("MINĘŁO 50 TUR\n");}
        if(wroc.pop < 1){theend = true; printf("MIASTO WYMARŁO\n");}
        if(wroc.budget < 1) {theend = true; printf("MIASTO ZBANKRUTOWAŁO\n");}
    }
    printf("KONIEC SYMULACJI\n");

}
