#include "harl.hpp"

int main(int ac, char **av)
{
    int     level = getLevel(av[1]);
    Harl    msg;

    if (ac == 2)
    {
        switch (level)
        {
            case 0:
                msg.complain("DEBUG");
                break;
            case 1:
                msg.complain("INFO");
                break;
            case 2:
                msg.complain("WARNING");
                break;
            case 3:
                msg.complain("ERROR");
                break;
            case -1:
                msg.complain("INVALID");
                break;
        }
    }
}