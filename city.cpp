#include "city.h"

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <fstream>
#include <string>

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


void city::turn()
{
    pop+=pop*pop_growth;
    budget+=income;
    pop_growth = (pop / 100.00000)/budget;
    income = pop / 10;
    week++;
}

void city::event()
{
    string eve;
    int tpop=0,tbud=0;
    double tpgr=1,tinc=1;
    printf("\nEvent sie dzieje\n");
    fstream file;
    file.open("events.txt",ios::in);
    string temp_str;
    int line=1,num_event=1;
    while(getline(file,temp_str))
    {
        switch(line)
        {
            case 1: eve=temp_str;
            case 2: tpop=atoi(temp_str.c_str());
            case 3: tbud=atoi(temp_str.c_str());
            case 4: tpgr=atof(temp_str.c_str());
            case 5: tinc=atof(temp_str.c_str());
        }
        line++;
    }

    cout << eve << endl << tpop << endl << tbud << endl << tpgr << endl << tinc << endl;
}

