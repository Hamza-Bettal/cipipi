/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbettal <hbettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 22:58:04 by hbettal           #+#    #+#             */
/*   Updated: 2024/10/30 18:08:17 by hbettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->number = 0;
}

Fixed::Fixed( const Fixed &other ) : number(other.number)
{}

Fixed::Fixed( const int raw ) : number(raw << Fixed::bits)
{}

Fixed::Fixed( const float raw ) : number(raw * pow(2, Fixed::bits))
{}

Fixed::~Fixed()
{
}

Fixed Fixed::min( Fixed &a, Fixed &b)
{
	if (a > b)
		return (b);
	return (a);
}

Fixed Fixed::min( const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (b);
	return (a);
}

Fixed Fixed::max( Fixed &a, Fixed &b)
{
	if (a < b)
		return (b);
	return (a);
}

Fixed Fixed::max( const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (b);
	return (a);
}

Fixed &Fixed::operator=( const Fixed &other )
{
	this->number = other.number;
	return (*this);
}

std::ostream &operator<<( std::ostream &out, const Fixed &other )
{
    out << other.toFloat();
    return (out);
}

bool Fixed::operator<( const Fixed &other ) const
{
	return (this->number < other.number);
}

bool Fixed::operator<=( const Fixed &other ) const
{
	return (this->number <= other.number);
}

bool Fixed::operator>( const Fixed &other ) const
{
	return (this->number > other.number);
}

bool Fixed::operator>=( const Fixed &other ) const
{
	return (this->number >= other.number);
}

bool Fixed::operator==( const Fixed &other ) const
{
	return (this->number == other.number);
}

bool Fixed::operator!=( const Fixed &other ) const
{
	return (this->number != other.number);
}

Fixed &Fixed::operator+( const Fixed &other )
{
	this->number += other.number;
	return (*this);
}

Fixed &Fixed::operator-( const Fixed &other )
{
	this->number -= other.number;
	return (*this);
}

Fixed &Fixed::operator*( const Fixed &other )
{
	this->number *= other.toFloat();
	return (*this);
}

Fixed &Fixed::operator/( const Fixed &other )
{
	this->number /= other.toFloat();
	return (*this);
}

Fixed Fixed::operator++( int )
{
	Fixed tmp = *this;
	this->number += 1;
	return (tmp);
}

Fixed &Fixed::operator++()
{
	this->number += 1;
	return (*this);
}

Fixed Fixed::operator--( int )
{
	Fixed tmp = *this;
	this->number -= 1;
	return (tmp);
}

Fixed &Fixed::operator--()
{
	this->number += 1;
	return (*this);
}

int Fixed::getRawBits() const
{
	return (this->number);
}

void Fixed::setRawBits( int const raw )
{
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