#include <cstdlib>
#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
#include <ctime>
#include "PaySalary.h"
using namespace std;



int main() {
PaySalary mySalary;
cout << boolalpha;
 cout << "testing accessor methods for PaySalary: " << endl;
     cout << mySalary.getSalary() << endl;
     cout << mySalary.getMonthly() << endl;
 cout << "testing Mutator methods for Yearly and Monthly Salary: " << endl;
     mySalary.setSalary(120000);
     mySalary.setMonthly(10000);
     cout << mySalary.getSalary() << endl;
     cout << mySalary.getMonthly() << endl;
 cout << "testing function for calculating retroactive pay: " << endl;
     cout << mySalary.retroactivePay() << endl;
     cout << mySalary.getMonthly() << endl;
}