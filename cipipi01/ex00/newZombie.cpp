#include "Zombie.hpp"

Zombie  *newZombie(std::string  name)
{
    Zombie *zombieName = new Zombie(name);
    return (zombieName);
}
