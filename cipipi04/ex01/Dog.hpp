/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbettal <hbettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 10:13:25 by hbettal           #+#    #+#             */
/*   Updated: 2024/11/26 14:00:42 by hbettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog : public Animal
{
    public :
        Dog( void );
        Dog( Dog &other );
        ~Dog();

        Dog &operator=( Dog &other );

        void makeSound( void ) const;
};
