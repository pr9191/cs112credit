//   CS 112 Spring 2023 - Week 12
//   C++ Number Loop and Combination
//   CS 112 Spring 2023 – Extra Credit
//   Peter Rubin

#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
#include <ctime>
#include "RiddlerPuzzle.h"
using namespace std;

/*
Signature: RiddlerPuzzle: double -> boolean double
Purpose: design recipe for a function RiddlerPuzzle that expects a Number Input of four digits
representing a combination, and uses a function to return the correct address of the Riddler.
(RiddlerPuzzle(5,8,6,8)) == false;
(RiddlerPuzzle(9,4,8,6)) == false;
(RiddlerPuzzle(6,9,7,5)) == false;
(RiddlerPuzzle(8,3,9,7)) == false;
*/

RiddlerPuzzle::RiddlerPuzzle() {
   AddressDigits[0] = 5;
   AddressDigits[1] = 8; // for array constructors, they should be assigned seperately then all togher, unless algorithm
   AddressDigits[2] = 6;
   AddressDigits[3] = 8;
     AddressSum = 27;
      AddressType = true;
}
RiddlerPuzzle::RiddlerPuzzle(double new0, double new1, double new2, double new3){
   AddressDigits[0] = new0;
     AddressDigits[1] = new1;
     AddressDigits[2] = new2;
     AddressDigits[3] = new3;
     AddressSum = (AddressDigits[0] + AddressDigits[1] + AddressDigits[2] + AddressDigits[3]);
}
RiddlerPuzzle::RiddlerPuzzle(double new0, double new1, double new2, double new3, bool Type) {
     AddressDigits[0] = new0;
     AddressDigits[1] = new1;
     AddressDigits[2] = new2;
     AddressDigits[3] = new3;
     AddressSum = (AddressDigits[0] + AddressDigits[1] + AddressDigits[2] + AddressDigits[3]);
     AddressType = Type;
 }

// functions

     bool RiddlerPuzzle::IsDifferent() {
      if(AddressDigits[1] != AddressDigits[2] != AddressDigits[3] != AddressDigits[4])
      {return true;}

       else{return false;}
     }
// the number is odd
      bool RiddlerPuzzle::AddressOdd() {
         if (AddressSum == 27){ // use int() conversion for same value
       if (int(AddressDigits[3]) % 2 == 0) {
          cout << "Address type Is even" << endl;
          return false;
       }
          else
          cout << "Address type Is Odd" << endl;
          return true;
         }
         else{
            cout << "Invalid sum" << endl;
            return false;
         }
      }

// first digit is 3 times third digit
bool RiddlerPuzzle::AddressMultiple() {
   if (AddressSum == 27){
      if(AddressDigits[0] = 3 * AddressDigits[2]) {
      return true;
      }
      else{
         cout << "not correct order" << endl;
         return false;
      }
   }
      else{
         cout << "Invalid sum" << endl;
         return false;
      }
   }

 // accessors
     double RiddlerPuzzle::getDigits(){
      cout << AddressDigits[0] << "," << AddressDigits[1] << "," << AddressDigits[2] << "," << AddressDigits[3] << endl;
       return AddressDigits[0];
    }
     double RiddlerPuzzle::getSum(){
       return AddressSum;
    }
     bool RiddlerPuzzle::getType(){
       return AddressType;
    }


    // Mutators
    void RiddlerPuzzle::setDigits(double new0, double new1, double new2, double new3){ //yearly
    AddressDigits[0] = new0;
    AddressDigits[1] = new1;
    AddressDigits[2] = new2;
    AddressDigits[3] = new3; // for arrat values they need to be re-assigned individually when mutators If not algorithm
    AddressSum = (AddressDigits[0] + AddressDigits[1] + AddressDigits[2] + AddressDigits[3]);
    // defined in mutator so when changed, numbers align with 27
    }
    void RiddlerPuzzle::setType(bool newType){ //monthly
    AddressType = newType;
    }