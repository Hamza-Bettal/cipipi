#include "humanB.hpp"

HumanB::HumanB(std::string newName) : name(newName), weapon(NULL)
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
