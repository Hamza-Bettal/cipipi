#include "humanB.hpp"
#include "humanA.hpp"

HumanB::HumanB() : name("default"), weapon(NULL)
{
}

HumanB::HumanB(std::string newName) : name(newName), weapon(NULL)
{
}

HumanB::~HumanB()
{
}

void    HumanB::setWeapon(Weapon &gun)
{
    this->weapon = &gun;
}

void    HumanB::attack()
{
    if (this->weapon)
        std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
    else
        std::cout << this->name << " has no weapon to attack with" << std::endl;
}
