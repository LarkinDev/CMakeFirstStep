#include "../Headers/Pig.hpp"
string Pig::getTypeOfAnimal() 
{
    return typeid(*this).name();
}
string Pig::getNoise() 
{
    return this->noise;
}
string Pig::getLegsNumber() 
{
    return std::to_string(this->legs);
}
Pig::Pig()
{
    this->legs = 4;
    this->noise = "chru-chru";
}

Pig::~Pig()
{
    std::cout<<"Pig destructor!\n";
}