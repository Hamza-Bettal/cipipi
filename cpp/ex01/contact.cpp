#include "contact.hpp"

std::string contact::getsecret() const
{
    return (this->darksecret);
}

std::string contact::getfname() const
{
    return (this->firstname);
}

std::string contact::getlname() const
{
    return (this->lastname);
}

std::string contact::getnumber() const
{
    return (this->number);
}

std::string contact::getnname() const
{
    return (this->nickname);
}

void contact::setsecret(std::string secret)
{
    this->darksecret = secret;
}

void contact::setfname(std::string fname)
{
    this->firstname = fname;
}

void contact::setlname(std::string lname)
{
    this->lastname = lname;
}

void contact::setnumber(std::string number)
{
    this->number = number;
}

void contact::setnname(std::string nname)
{
    this->nickname = nname;
}
