#include "humanA.hpp"

class HumanB
{
    private:
        std::string name;
        Weapon weapon;
        
    public:
        HumanB(std::string newName);
        void    setWeapon(Weapon gun);
        void    attack();
};
