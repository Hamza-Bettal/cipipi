/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbettal <hbettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 13:17:11 by hbettal           #+#    #+#             */
/*   Updated: 2024/11/30 13:19:39 by hbettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "AMateria.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure( Cure &other ) : AMateria(other)
{
}

Cure::~Cure()
{
}

Cure &Cure::operator=( Cure &other )
{
	return (other);
}

AMateria *Cure::clone( void ) const
{
	return (new Cure());
}

void Cure::use(ICharacter &target)
{
	std::cout << "heals " << target.getName() << "’s wounds\n";
}
