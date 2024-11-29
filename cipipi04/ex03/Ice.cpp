/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbettal <hbettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 15:23:49 by hbettal           #+#    #+#             */
/*   Updated: 2024/11/27 15:41:07 by hbettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("cure")
{
}

Ice::Ice( Ice &other ) : AMateria(other)
{
}

Ice::~Ice()
{
}

Ice &Ice::operator=( Ice &other )
{
    return (other);
}

AMateria *Ice::clone( void ) const
{
    return (new Ice());
}
