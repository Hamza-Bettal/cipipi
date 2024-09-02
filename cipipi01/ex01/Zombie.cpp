#include "Zombie.hpp"

Zombie::Zombie()
{
}

void    Zombie::setname(std::string name)
{
    this->_name = name;
}

void    Zombie::announce()
{
    std::cout << _name + ": BraiiiiiiinnnzzzZ...";
    std::cout << std::endl;
}
