#include <iostream>

class Harl
{
    private :
        void debug();
        void info();
        void warning();
        void error();

    public :
        void complain(std::string level);
        ~Harl();
};

typedef void (Harl::*function_ptr)();
int     getLevel(std::string level);