/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbettal <hbettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 10:14:56 by hbettal           #+#    #+#             */
/*   Updated: 2024/11/26 14:00:32 by hbettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Cat : public Animal
{
    public :
        Cat( void );
        Cat( Cat &other );
        ~Cat();

        Cat &operator=( Cat &other );

        void makeSound( void ) const;
};
