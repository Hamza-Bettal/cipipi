#include "Zombie.hpp"

int main()
{
    int i = 5;
    Zombie *horde = ZombieHorde(i, "7mar");

    std::cout << "exampleee :" << std::endl;
    i = 0;
    while (i < 5)
    {
        horde[i].announce();
        i++;
    }
    delete[] horde;
}
