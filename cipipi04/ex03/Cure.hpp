/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbettal <hbettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 15:09:58 by hbettal           #+#    #+#             */
/*   Updated: 2024/11/30 13:18:45 by hbettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure( void );
        Cure( Cure &other );
        ~Cure();

        Cure &operator=( Cure &other );
        
        AMateria*   clone( void ) const;
        void        use(ICharacter& target);
};
