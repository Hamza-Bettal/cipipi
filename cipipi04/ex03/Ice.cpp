/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbettal <hbettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 15:23:49 by hbettal           #+#    #+#             */
/*   Updated: 2024/11/30 13:16:27 by hbettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "AMateria.hpp"

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

void Ice::use(ICharacter &target)
{
	std::cout << "shoots an ice bolt at " << target.getName() << '\n';
}
