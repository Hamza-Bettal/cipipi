/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbettal <hbettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 10:07:39 by hbettal           #+#    #+#             */
/*   Updated: 2024/11/26 13:37:27 by hbettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal
{
    protected :
        std::string type;

    public :
        Animal( void );
        ~Animal();
        Animal( Animal &other );
    
        Animal &operator=( Animal &other );

        std::string     getType() const;
        virtual void    makeSound() const;
};
