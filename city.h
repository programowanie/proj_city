#ifndef CITY_H
#define CITY_H

#pragma once
class city
{
public:
    int week;
    int pop;
    double budget;
    double pop_growth;
    double income;
    double rating;

    void turn();
    void raport();
    void event();

    city();
};

#endif // CITY_H
