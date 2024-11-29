#include "humanA.hpp"

HumanA::HumanA(std::string str, Weapon &gun) : name(str), weapon(gun)
{
}

void    HumanA::attack()
{
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}
