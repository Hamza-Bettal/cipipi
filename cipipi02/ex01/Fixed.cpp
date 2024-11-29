/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbettal <hbettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 22:58:04 by hbettal           #+#    #+#             */
/*   Updated: 2024/11/26 14:13:09 by hbettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->number = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed &other ) : number(other.number)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed( const int raw ) : number(raw << Fixed::bits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( const float raw ) : number(raw * pow(2, Fixed::bits))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed &Fixed::operator=( const Fixed &other )
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->number = other.number;
	return (*this);
}

std::ostream &operator<<( std::ostream &out, const Fixed &other )
{
    out << other.toFloat();
    return (out);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const
{
	return (this->number);
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->number = raw;
}

float Fixed::toFloat() const
{
    return (this->number) / pow(2, this->bits);
}

int Fixed::toInt() const
{
    return (number / pow(2, this->bits));
}
