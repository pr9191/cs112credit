#ifndef CLOTHINGSIZE_H
#define CLOTHINGSIZE_H

class ClothingSize {

    public:
    ClothingSize();
    ClothingSize(double Height, double Weight, double Age, char Size);

    // functions
    double JacketSize();
    double HatSize();
    double WaistSize();

    // accessors
    double getHeight();
    double getWeight();
    double getAge();
    char getSize();

    // mutators
    void setHeight(double newHeight);
    void setWeight(double newWeigth);
    void setAge(double newAge);
    void setSize(char newSize);

    protected:
     double userHeight;
     double userWeight;
     double userAge;
     char userSize;
};

#endif