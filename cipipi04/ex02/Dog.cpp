/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbettal <hbettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 10:22:07 by hbettal           #+#    #+#             */
/*   Updated: 2024/11/26 14:04:15 by hbettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
    this->type = "Dog";
    std::cout << "Default Contructor of Dog Called\n";
}

Dog::Dog( Dog &other ) : Animal( other )
{
    std::cout << "Copy Contructor of Dog Called\n";
}

Dog &Dog::operator=( Dog &other )
{
    this->type = other.type;
    this->idea = other.idea;
    std::cout << "Copy Assignment Operator of Dog Called\n";
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Default Contructor of Dog Called\n";
}

void    Dog::makeSound() const
{
    std::cout << "Bark\n";
}
