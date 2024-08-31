#include "zombie.hpp"

int main()
{
    std::cout << "      heap example       \n";

    Zombie *heapZombie = newZombie("BoB");
    heapZombie->announce();
    delete(heapZombie);

    std::cout << "      stack example       \n";

    randomChump("machi BoB");
}