#include "Animal.hpp"
class Dog : public Animal
{
public:
    Dog();
    ~Dog();
    string getNoise() override;
    string getTypeOfAnimal() override;
    string getLegsNumber() override;
};