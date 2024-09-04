#include "humanB.hpp"

HumanB::HumanB(std::string newName) : name(newName), weapon("arm")
{
}

void    HumanB::setWeapon(Weapon gun)
{
    this->weapon = gun;
}

void    HumanB::attack()
{
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}