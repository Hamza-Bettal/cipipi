/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbettal <hbettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 10:07:39 by hbettal           #+#    #+#             */
/*   Updated: 2024/11/26 14:05:16 by hbettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Brain.hpp"

class Animal
{
    protected :
        std::string type;
        Brain       *idea;

    public :
        Animal( void );
        virtual ~Animal();
        Animal( Animal &other );
    
        Animal &operator=( Animal &other );

        std::string     getType() const;
        virtual void    makeSound() const;
};
