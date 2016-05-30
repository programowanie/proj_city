#include "city.h"

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

vector<string> events;
int t_pop = 0;
int t_budget = 0;
double t_pop_growth = 1;
double t_income = 1;

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

void city::turn()
{
    pop += pop * pop_growth + t_pop;
    budget += income + t_budget;
    pop_growth = ((pop / 100.00000)/budget) * t_pop_growth;
    income = (pop / 10) * t_income;
    week++;
}

void city::event()
{
    string line;
    int n = rand()%20;
    ifstream file("events.csv");
    if(file)
    {
        while(getline(file,line,'|'))
        events.push_back(line);
        for (int i = n*5; i < n*5+5; ++i)
        {
            switch(i-(n*5))
            {
                case 0: cout << events[i] << endl; break;
                case 1: t_pop = atoi(events[i].c_str()); break;
                case 2: t_budget = atoi(events[i].c_str()); break;
                case 3: t_pop_growth = atof(events[i].c_str()); break;
                case 4: t_income = atof(events[i].c_str()); break;
            }
        }
    }
}
