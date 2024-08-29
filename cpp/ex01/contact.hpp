#pragma once

#include <iostream>

class contact
{
    public:
        std::string getfname() const;
        std::string getlname() const;
        std::string getnumber() const;
        std::string getnname() const;
        std::string getsecret() const;
        void setfname(std::string fname);
        void setlname(std::string lname);
        void setnumber(std::string number);
        void setnname(std::string nname);
        void setsecret(std::string secret);

    private:
        std::string firstname;
        std::string lastname;
        std::string number;
        std::string nickname;
        std::string darksecret;
};
