#include "phonebook.hpp"


void    phonebook::add_contact()
{
    std::string input;

    if (this->index > 7)
    {
        index = 0;
    }
    std::cout << "please enter the first name:\n";
    std::cin >> input;
    this->contacts[index].setfname(input);

    std::cout << "please enter the last name:\n";
    std::cin >> input;
    this->contacts[index].setlname(input);

    std::cout << "please enter the number phone:\n";
    std::cin >> input;
    this->contacts[index].setnumber(input);

    std::cout << "please enter the nick name:\n";
    std::cin >> input;
    this->contacts[index].setnname(input);

    std::cout << "please enter the dark secret:\n";
    std::cin >> input;
    this->contacts[index].setsecret(input);

    this->index++;
}

std::string fixoutput(std::string str)
{
    int n = str.length();
    
    while (n < 10)
    {
        str += ' ';
        n++;
    }
    return (str);
}

void    phonebook::contactdisplay(std::string index)
{
    contact *tmp = this->contacts;

    std::cout << "FirstName  LastName  NickName  number  DarkSecret\n";
    std::cout << "---------------------------------------------------------------------\n";
    std::cout << fixoutput(tmp[index[0] - '0' - 1].getfname()) + '|';
    std::cout << fixoutput(tmp[index[0] - '0' - 1].getlname()) + '|';
    std::cout << fixoutput(tmp[index[0] - '0' - 1].getnname()) + '|';
    std::cout << fixoutput(tmp[index[0] - '0' - 1].getnumber()) + '|';
    std::cout << fixoutput(tmp[index[0] - '0' - 1].getsecret()) + '\n';
}

void    phonebook::search_incontact()
{
    std::string input;

    std::cout << "which contact are u looking for (enter a number)?\n";
    while (1)
    {
        std::cin >> input;
        if (input[0] >= '1' && input[0] <= '8' && !input[1])
            break ;
        else
            std::cout << "wronge input try again:\n";
    }
    contactdisplay(input);
}

int main()
{
    std::string input;
    phonebook   phone;

    while (input.compare("EXIT"))
    {
        std::cin >> input;
        if (!input.compare("ADD"))
            phone.add_contact();
        if (!input.compare("SEARCH"))
            phone.search_incontact();
    }
}
