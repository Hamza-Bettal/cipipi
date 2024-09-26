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
        cout << "[ Probably complaining about insignificant problems ]" << endl;
    else
        (this->*(function[lvl]))();
}

void    Harl::debug()
{
    cout << "I’ve been tracking the response times of our application, and it seems like the \
database queries are taking longer than expected during peak usage." << endl;
}
void    Harl::info()
{
    cout << "During my last review of the system logs, I found several instances of successful \
logins from new devices. This might indicate some account sharing." << endl;
}
void    Harl::warning()
{
    cout << "It appears that some users are experiencing intermittent connectivity issues. \
While they can still use the service, it may frustrate them if it continues." << endl;
}
void    Harl::error()
{
    cout << "I just received an alert that the server is down. This is a major issue, and \
we need to address it immediately to avoid downtime!" << endl;
}