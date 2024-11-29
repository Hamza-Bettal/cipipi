/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbettal <hbettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 15:05:23 by hbettal           #+#    #+#             */
/*   Updated: 2024/11/27 15:40:31 by hbettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
    protected:
        std::string _type;
        
    public:
        AMateria( void );
        AMateria( std::string const &type );
        AMateria( AMateria &other );
        virtual ~AMateria();

        AMateria &operator=( AMateria &other );
        
        std::string const &getType( void ) const;
        virtual AMateria* clone( void ) const = 0;
        virtual void use(ICharacter& target);
};