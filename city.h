#ifndef CITY_H
#define CITY_H

#pragma once
class city
{
public:
    int week;
    int pop;
    //podstawowe atrybuty
    double budget;
    double pop_growth;
    double income;
    //zmiany atrybutów
    int t_pop;
    int t_budget;
    double t_pop_growth;
    double t_income;

    void turn();
    void raport();
    void event();

    city();
};

#endif // CITY_H
