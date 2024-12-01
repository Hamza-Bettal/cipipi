/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbettal <hbettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 10:39:03 by hbettal           #+#    #+#             */
/*   Updated: 2024/12/01 14:57:31 by hbettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat() : Animal()
{
    this->type = "Cat";
    std::cout << "Default Contructor of Cat Called\n";
}

Cat::Cat( Cat &other ) : Animal( other )
{
    std::cout << "Copy Contructor of Cat Called\n";
}

Cat &Cat::operator=( Cat &other )
{
    this->type = other.type;
    this->idea = new Brain(*other.idea);
    std::cout << "Copy Assignment Operator of Cat Called\n";
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Default Contructor of Cat Called\n";
}

void    Cat::makeSound() const
{
    std::cout << "Meow\n";
}
