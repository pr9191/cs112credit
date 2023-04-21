//   CS 112 Spring 2023 - Week 12
//   C++ Decleration and Pay Increase
//   CS 112 Spring 2023 – Extra Credit
//   Peter Rubin

#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
#include <ctime>
#include "PaySalary.h"
using namespace std;

/*
Signature: PaySalary: double double -> double
Purpose: design recipe to design a C++ function PaySalary that expects a number Input
representing a given salary, and outputs the mount of retroactive pay Increase.
(PaySalary 20,000) == 20,760;
(PaySalary 40,000) == 41,520;
(PaySalary 70,000) == 72,660;
(PaySalary 60,000) == 62,280;
*/

// constructors
PaySalary::PaySalary() {
     annualSalary = 90,000;
     monthlySalary = 7500;
     payIncrease = 570;
}
PaySalary::PaySalary(double Salary, double Monthly, double Increase) {
     annualSalary = Salary;
     monthlySalary = Monthly;
     payIncrease = Increase;

 }

// functions


     double PaySalary::retroactivePay(){
       payIncrease += (annualSalary / 2) * .076;
       return payIncrease;
 }

     double PaySalary::MonthlySalary(){
       return (annualSalary/12) + (payIncrease/12);
 }

 // accessors
     double PaySalary::getSalary(){
       return annualSalary;
    }
     double PaySalary::getMonthly(){
       return monthlySalary;
    }

    // Mutators
    void PaySalary::setSalary(double newSalary){ //yearly
    annualSalary = newSalary;
    }
    void PaySalary::setMonthly(double newMonthly){ //monthly
    monthlySalary = newMonthly;
    }
