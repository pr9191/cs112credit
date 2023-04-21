#ifndef PAYSALARY_H
#define PAYSALARY_H

#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
#include <ctime>

class PaySalary {

    public:
    PaySalary();
    PaySalary(double Salary, double Monthly, double Increase);

    // functions
    double retroactivePay();
    double MonthlySalary();

    // accessors
    double getSalary();
    double getMonthly();

    // mutators
    void setSalary(double newSalary);
    void setMonthly(double newMonthly);

    protected:
    double annualSalary;
    double monthlySalary;
    double payIncrease;
};

#endif