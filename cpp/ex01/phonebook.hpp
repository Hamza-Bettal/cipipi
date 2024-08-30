#pragma once

#include "contact.hpp"

class phonebook
{
    private :
        contact contacts[8];
        int     index;

    public :
        phonebook();
        void    add_contact();
        void    search_incontact();
        void    contactdisplay(std::string index);

};