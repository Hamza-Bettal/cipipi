/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbettal <hbettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 15:09:58 by hbettal           #+#    #+#             */
/*   Updated: 2024/11/27 15:23:26 by hbettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure( void );
        Cure( std::string const &type );
        Cure( Cure &other );
        ~Cure();

        Cure &operator=( Cure &other );
        
        std::string const &getType( void ) const;
        virtual Cure* clone( void ) const = 0;
        // virtual void use(ICharacter& target);
};
