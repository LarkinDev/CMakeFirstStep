#include "../Headers/Dog.hpp"
string Dog::getTypeOfAnimal()
{
    return typeid(*this).name();
}

string Dog::getNoise()
{
    return this->noise;
}

string Dog::getLegsNumber()
{
    return std::to_string(this->legs);
}

Dog::Dog()
{
    this->legs = 4;
    this->noise = "gav-gav";
}


Dog::~Dog()
{}