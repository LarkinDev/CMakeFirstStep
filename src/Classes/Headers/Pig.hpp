#include "Animal.hpp"
class Pig : public Animal
{
public:
    Pig();
    ~Pig();
    string getNoise() override;
    string getTypeOfAnimal() override;
    string getLegsNumber() override;
};