#include "Zombie.hpp"

Zombie  *ZombieHorde(int N, std::string name)
{
    int     i = 0;
    Zombie  *horde = new Zombie[N];

    while (i < N)
        horde[i++].setname(name);
    return (horde);
}
