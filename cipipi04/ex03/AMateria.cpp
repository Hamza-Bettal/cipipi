/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbettal <hbettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 15:10:29 by hbettal           #+#    #+#             */
/*   Updated: 2024/11/27 15:31:25 by hbettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::AMateria( std::string const &type ) : _type(type)
{
}

AMateria::AMateria( AMateria &other ) : _type(other._type)
{
}

AMateria::~AMateria()
{
}

AMateria &AMateria::operator=( AMateria &other )
{
    return (other);
}

std::string const &AMateria::getType( void ) const
{
    return (this->_type);
}
