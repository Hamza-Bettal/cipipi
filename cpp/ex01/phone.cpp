#include "phonebook.hpp"

phonebook::phonebook()
{
    index = 0;
    std::cout << "          Welcome :D\n";
}

void    phonebook::add_contact()
{
    std::string input;

    if (index > 7)
    {
        std::cout << "you reach the limit of 8 contacts, by adding the next one you gonna overwrite the first one\n";
        index = 0;
    }
    std::cout << "please enter the first name:\n";
    std::cin >> input;
    contacts[index].setfname(input);

    std::cout << "please enter the last name:\n";
    std::cin >> input;
    contacts[index].setlname(input);

    std::cout << "please enter the number phone:\n";
    std::cin >> input;
    contacts[index].setnumber(input);

    std::cout << "please enter the nick name:\n";
    std::cin >> input;
    contacts[index].setnname(input);

    std::cout << "please enter the dark secret:\n";
    std::cin >> input;
    contacts[index].setsecret(input);

    index++;
}

std::string fixoutput(std::string str)
{
    int n = str.length();

    if (n > 10)
    {
        while (str.length() > 10)
            str.pop_back();
        str[str.length() - 1] = '.';
    }    
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

    std::cout << "FirstName  LastName   NickName   number     DarkSecret\n";
    std::cout << "----------------------------------------------------------------\n";
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
