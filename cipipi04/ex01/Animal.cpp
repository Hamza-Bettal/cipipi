/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbettal <hbettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 10:24:02 by hbettal           #+#    #+#             */
/*   Updated: 2024/11/30 16:18:47 by hbettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    this->idea = new Brain();
    type = "Default";
    std::cout << "Default Contructor of Animal Called\n";
}

Animal::Animal( Animal &other ) : type(other.type)
{
    std::cout << "Copy Contructor of Animal Called\n";
}

Animal &Animal::operator=( Animal &other )
{
    if (this == &other)
        return *this;
    this->type = other.type;
    this->idea = other.idea;
    std::cout << "Copy Assignment Operator of Animal Called\n";
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Default Decontructor of Animal Called\n";
    delete idea;
}

std::string Animal::getType() const
{
    return (this->type);
}

void Animal::makeSound() const
{
    std::cout << "Does not have a sound\n";
}
