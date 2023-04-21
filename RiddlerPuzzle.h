#ifndef RIDDLERPUZZLE_H
#define RIDDLERPUZZLE_H

#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
#include <ctime>

class RiddlerPuzzle {

    public:
    RiddlerPuzzle();
    RiddlerPuzzle(double new0, double new1, double new2, double new3);
    RiddlerPuzzle(double new0, double new1, double new2, double new3, bool Type);
    // functions
    bool IsDifferent();
    bool AddressOdd();
    bool AddressMultiple();

    // accessors
    double getDigits();
    double getSum();
    bool getType();

    // mutators
    void setDigits(double new0, double new1, double new2, double new3);
    void setType(bool newType);

    protected:
     double AddressDigits[3];
     double AddressSum;
     bool AddressType;
};

#endif