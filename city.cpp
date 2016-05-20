#include "city.h"

#include <cstdlib>
#include <cstdio>

using namespace std;

int random_value()
{
    return 1 + rand()%100;
}

city::city()
{
    week = 1;
    pop = random_value() * 1000;
    budget = random_value() * 10000;
    pop_growth = (pop / 100.00000)/budget;
    income = pop / 10;
}

void city::raport()
{
    printf("\nTydzien : %d",week);
    printf("\nPopulacja : %9d ludzi  Przyrost naturalny : %.5f procent populacji/tydzien",pop,pop_growth);
    printf("\nBudzet : %15.2f zl  Przychod : %6.3f zl/tydzien", budget,income);
}

void event()
{
    printf("cos sie dzieje\n");
}

void city::turn()
{
    void event();
    pop+=pop*pop_growth;
    budget+=income;
    pop_growth = (pop / 100.00000)/budget;
    income = pop / 10;
    week++;
}

