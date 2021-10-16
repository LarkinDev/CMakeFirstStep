#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
#include <iostream>
using std::string;
class Animal
{
protected:
    int legs;
    std::string noise;

public:
    virtual ~Animal(){};
    virtual string getTypeOfAnimal() = 0;
    virtual string getLegsNumber() = 0;
    virtual string getNoise() = 0;
};
#endif