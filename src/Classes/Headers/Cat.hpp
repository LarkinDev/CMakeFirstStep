#include "Animal.hpp"
class Cat : public Animal
{
public:
    Cat();
    ~Cat();
    string getNoise() override;
    string getTypeOfAnimal() override;
    string getLegsNumber() override;
};