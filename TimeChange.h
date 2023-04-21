#ifndef TIMECHANGE_H
#define TIMECHANGE_H

#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
#include <ctime>

class TimeChange {

    public:
    TimeChange();
    TimeChange(double TimeMinutes, double TimeHours, double TimeCurrent);
    TimeChange(double TimeMinutes, double TimeHours, double TimeCurrent, char TimePeriod);

    // functions
    double TimeInput();
    double TimeConversion();
    double TimeOutput();

    // accessors
    double getHours();
    double getMinutes();
    char getPeriod();
    double getCurrent();

    // mutators
    void setHours(double newHours);
    void setMinutes(double newMinutes);
    void setPeriod(char newPeriod);
    void setCurrent(double newCurrent);

    protected:
     double TimeMinutes;
     double TimeHours;
     double TimeCurrent;
     char TimePeriod;
};

#endif