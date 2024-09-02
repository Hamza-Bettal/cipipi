#pragma once

#include <iostream>

class Zombie
{
    private :
        std::string _name;

    public :

        Zombie();
        void    announce();
        void    setname(std::string name);
};

Zombie  *ZombieHorde(int N, std::string name);
