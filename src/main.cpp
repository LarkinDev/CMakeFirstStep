#include <iostream>
#include "Classes/Headers/Cat.hpp"
#include "Classes/Headers/Pig.hpp"
#include "Classes/Headers/Dog.hpp"
#include <vector>
using std::cin;
using std::cout;
using std::vector;

void clearVectorofAnimals(vector<Animal *> &ans)
{
    for (auto i : ans)
    {
        delete i;
    }
    vector<Animal *>().swap(ans);
}
void getInfo(vector<Animal *> &an)
{
    for (int i = 0; i < an.size(); i++)
    {
        std::cout << "Animal No. " + std::to_string(i + 1) +
                         " kind is " + an[i]->getTypeOfAnimal() +
                         ", number of its legs is " + an[i]->getLegsNumber() +
                         " and it makes following noise : " + an[i]->getNoise() + "\n";
    }
}
int main()
{
    vector<Animal *> animals;
    Animal *c = new Cat();
    Animal *p = new Pig();
    Animal *d = new Dog();
    animals.push_back(c);
    animals.push_back(p);
    animals.push_back(d);
    getInfo(animals);
    string e = "end";
    clearVectorofAnimals(animals);
    while (true)
    {
        cout << "\nPress enter to end the program\n";
        getline(cin, e);
        if (e.size() == 0)
        {
            break;
        }
        else if (e == "clear")
        {
            #if defined(__LINUX__) || defined(__gnu_linux__) || defined(__linux__)
            system("clear");
            #endif
        }
        else if(e == "cls")
        {
            #if defined _WIN32
            system("cls");
            #endif
        }
    }

    return 0;
}