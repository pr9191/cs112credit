#include <cstdlib>
#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
#include <ctime>
#include "TimeChange.h"
using namespace std;


int main() {
TimeChange time;
cout << boolalpha;
 cout << "testing accessor methods for Changing Time: " << endl;
     cout << time.getHours() << endl;
     cout << time.getMinutes() << endl;
     cout << time.getPeriod() << endl;
 cout << "testing Mutator methods for Change to regular: " << endl;
     time.setHours(1);
     time.setMinutes(30);
     time.setPeriod('P');
     cout << time.getHours() << endl;
     cout << time.getMinutes() << endl;
     cout << time.getPeriod() << endl;
 cout << "testing function for Time Change: " << endl;
    cout << time.TimeInput() << endl;
    cout << time.TimeConversion() << endl;
    cout << time.TimeOutput() << endl;
}