#include "zombie.hpp"

void  randomChump(std::string name)
{
    Zombie zombieName(name);

    zombieName.announce();
}