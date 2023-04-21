#include <cstdlib>
#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
#include <ctime>
#include "ClothingSize.h"
using namespace std;


int main() {
ClothingSize mySize;
cout << boolalpha;
 cout << "testing accessor methods for ClothingSize: " << endl;
 cout << mySize.getHeight() << endl;
 cout << mySize.getWeight() << endl;
 cout << mySize.getAge() << endl;
 cout << mySize.getSize() << endl;

 cout << "testing Mutator methods for parameters: " << endl;
     mySize.setHeight(5.10);
     mySize.setWeight(170);
     mySize.setAge(24);
     mySize.setSize('M');

     cout << mySize.getHeight() << endl;
     cout << mySize.getWeight() << endl;
     cout << mySize.getAge() << endl;
     cout << mySize.getSize() << endl;

 cout << "testing function for computing size: " << endl;
    cout << mySize.JacketSize() << endl;
    cout << mySize.HatSize() << endl;
    cout << mySize.WaistSize() << endl;


}