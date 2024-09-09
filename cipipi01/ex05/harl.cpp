#include "harl.hpp"

using namespace std;

int    getLevel(string level)
{
    if (!level.compare("DEBUG"))
        return (0);
    else if (!level.compare("INFO"))
        return (1);
    else if (!level.compare("WARNING"))
        return (2);
    else if (!level.compare("ERROR"))
        return (3);
    else
        return (-1);
}

void    Harl::complain(string level)
{
    function_ptr    function[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    int             lvl = getLevel(level);

    if (lvl < 0)
        cout << "anvalid level" << endl;
    else
        (this->*(function[lvl]))();
}

void    Harl::debug()
{
    cout << "3ndk error wlkin hanya a3chiry ana n9ado lik ;)" << endl;
}
void    Harl::info()
{
    cout << "3ndk error wlkin hanya a3chiry rah sahl bach t9ado" << endl;
}
void    Harl::warning()
{
    cout << "wakhuya ra chwiya o nbda nsb 9ad had error" << endl;
}
void    Harl::error()
{
    cout << "m3ndk ta wza s7i7a kolchy ghalat in3lbok" << endl;
}