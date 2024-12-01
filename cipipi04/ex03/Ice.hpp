/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbettal <hbettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 15:09:16 by hbettal           #+#    #+#             */
/*   Updated: 2024/11/30 13:11:57 by hbettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice( void );
        Ice( Ice &other );
        ~Ice();

        Ice &operator=( Ice &other );
        
        AMateria*   clone( void ) const;
        void        use(ICharacter &target);
};
