//   CS 112 Spring 2023 - Week 12
//   C++ User Input and Size Formulas
//   CS 112 Spring 2023 – Extra Credit
//   Peter Rubin

#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
#include <ctime>
#include "ClothingSize.h"
using namespace std;

/*
Signature: ClothingSize: double double -> string
Purpose: design recipe to design a function ClothingSize that expects user Input
of size paramters, and returns expected size for different kinds for clothes.
(ClothingSize (5.8,150,28)) == "Large";
(ClothingSize (5.6,160,32)) == "Medium";
(ClothingSize (6.0,180,27)) == "Large";
(ClothingSize (5.5,120,29)) == "Small";
*/

// constructors
ClothingSize::ClothingSize() {
      userHeight = 5.8;
      userWeight = 150;
      userAge = 22;
      userSize = 'L';
}
ClothingSize::ClothingSize(double Height, double Weight,double Age, char Size) {
      userHeight = Height;
      userWeight = Weight;
      userAge = Age;
      userSize = Size;
 }

// functions

// jacket size

   double ClothingSize::JacketSize() {
       double tempAge = userAge;
       double adjustment = 0;
      while(tempAge >=40) {
         tempAge -= 10;
           adjustment += 1.8;
      }

    return ((userHeight * userWeight)/288) + adjustment ;
    }


// hat size
     double ClothingSize::HatSize() {
       return (userWeight/userHeight) * 2.9;
    }

// waist size
     double ClothingSize::WaistSize() {
      double adjustment = 0;
      double tempAge = userAge ;
        while(tempAge >= 30){
            tempAge -= 2;
              adjustment += 0.1;
        }
       return (userWeight / 5.7) + adjustment;
     }


 // accessors
     double ClothingSize::getHeight(){
       return userHeight;
    }
     double ClothingSize::getWeight(){
       return userWeight;
    }
    double ClothingSize::getAge(){
       return userAge;
    }
    char ClothingSize::getSize(){
       return userSize;
    }

    // Mutators
    void ClothingSize::setHeight(double newHeight){
    userHeight = newHeight;
    }
    void ClothingSize::setWeight(double newWeight){
    userWeight = newWeight;
    }
    void ClothingSize::setAge(double newAge){
    userAge = newAge;
    }
    void ClothingSize::setSize(char newSize){
    userSize = newSize;
    }
