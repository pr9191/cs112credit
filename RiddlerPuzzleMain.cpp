#include <cstdlib>
#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
#include <ctime>
#include "RiddlerPuzzle.h"
using namespace std;

int main() { // keep instances declared, in main
RiddlerPuzzle puzzle;
cout << boolalpha;
 cout << "testing accessor methods for Riddler Puzzle: " << endl;
     cout << puzzle.getDigits() << endl;
     cout << puzzle.getSum() << endl;
     cout << puzzle.getType() << endl;
 cout << "testing Mutator methods for changing numbers: " << endl;
     puzzle.setDigits(9,4,8,6);  
     puzzle.setType("even");
     cout << puzzle.getDigits() << endl;
     cout << puzzle.getSum() << endl;
     cout << puzzle.getType() << endl;
 cout << "testing function for finding the correct address: " << endl;
    cout << puzzle.IsDifferent() << endl;
    cout << puzzle.AddressOdd() << endl;
    cout << puzzle.AddressMultiple() << endl;
}