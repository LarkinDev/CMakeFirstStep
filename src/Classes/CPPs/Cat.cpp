#include "../Headers/Cat.hpp"
string Cat::getTypeOfAnimal()
{
    return typeid(*this).name();
}

string Cat::getNoise()
{
    return this->noise;
}

string Cat::getLegsNumber()
{
    return std::to_string(this->legs);
}

Cat::Cat()
{
    this->legs = 4;
    this->noise = "meow-meow";
}


Cat::~Cat()
{
    std::cout<<"Cat destructor!\n";
}