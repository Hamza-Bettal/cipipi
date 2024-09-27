#include "harl.hpp"

void    Harl::complain(std::string level)
{
	function_ptr	function[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string		lvl[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	unsigned long 	i = 0;

	while (i < lvl[i].length())
	{
		if (!lvl[i].compare(level))
			break ;
		i++;
	}
	if (i < 4)
		(this->*(function[i]))();
	else
		std::cout << "invalid level" << std::endl;
}

void    Harl::debug()
{
    std::cout << "I’ve been tracking the response times of our application, and it seems like the \
database queries are taking longer than expected during peak usage." << std::endl;
}
void    Harl::info()
{
    std::cout << "During my last review of the system logs, I found several instances of successful \
logins from new devices. This might indicate some account sharing." << std::endl;
}
void    Harl::warning()
{
    std::cout << "It appears that some users are experiencing intermittent connectivity issues. \
While they can still use the service, it may frustrate them if it continues." << std::endl;
}
void    Harl::error()
{
    std::cout << "I just received an alert that the server is down. This is a major issue, and \
we need to address it immediately to avoid downtime!" << std::endl;
}