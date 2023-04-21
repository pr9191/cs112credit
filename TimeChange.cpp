//   CS 112 Spring 2023 - Week 12
//   C++ Number Conversion and Char Input
//   CS 112 Spring 2023 – Extra Credit
//   Peter Rubin

#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
#include <ctime>
#include "TimeChange.h"
using namespace std;

/*
Signature: TimeChange: double -> double
Purpose: a design recipe to a c++ function TimeChange that expects a input of
24 hour form and uses a function to convert Into a 12 hour notation display.
(TimeChange 14:50) == 2:50;
(TimeChange 13:30) == 1:30;
(TimeChange 15:20) == 3:20;
(TimeChange 17:30) == 5:30;
*/

TimeChange::TimeChange() {
     TimeMinutes = 40;
     TimeHours = 2;
     TimeCurrent = 14,40;
     TimePeriod = 'P';
}
TimeChange::TimeChange(double Minutes, double Hours, double Current) {
      TimeMinutes = Minutes;
      TimeHours = Hours;
      TimeCurrent = Current;
      TimePeriod = 'P';
}
TimeChange::TimeChange(double Minutes, double Hours, double Current, char Period){
      TimeMinutes = Minutes;
      TimeHours = Hours;
      TimeCurrent = Current;
      TimePeriod = Period;
}


// functions

// full time notation

   double TimeChange::TimeInput() {
    cout << "Please enter current hours: ";
    cin >> TimeHours;
    cout << "Please enter current minutes: ";
    cin >> TimeMinutes;
    return TimeHours;
   }


    double TimeChange::TimeConversion() {
        if(TimeHours > 12) {
           TimePeriod = 'P';
           TimeCurrent = (TimeHours - 12);
          cout << to_string(TimeCurrent) + ":" + to_string(TimeMinutes) + to_string(TimePeriod) + "M" << endl;
          return TimeCurrent;
        }
         else {
          TimePeriod = 'A';
          cout << to_string(TimeHours) + ":" + to_string(TimeMinutes) + to_string(TimePeriod) + "M" << endl;
          return TimeHours;
         }


    }


    double TimeChange::TimeOutput() {
       cin >> TimeCurrent;
       cout << to_string(TimeCurrent) + ":" + to_string(TimeMinutes) + to_string(TimePeriod) + "M" << endl;
       return TimeCurrent;
    }

    // accessors
     double TimeChange::getHours(){
       return TimeHours;
    }
     double TimeChange::getMinutes(){
       return TimeMinutes;
    }
    char TimeChange::getPeriod(){
       return TimePeriod;
    }
    double TimeChange::getCurrent(){
       return TimeCurrent;
    }

    // Mutators
    void TimeChange::setHours(double newHours){
    TimeHours = newHours;
    }
    void TimeChange::setMinutes(double newMinutes){
    TimeMinutes = newMinutes;
    }
    void TimeChange::setPeriod(char newPeriod){
    TimePeriod = newPeriod;
    }
    void TimeChange::setCurrent(double newCurrent){
    TimeCurrent = newCurrent;
    }
