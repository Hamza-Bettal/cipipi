/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbettal <hbettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 22:57:33 by hbettal           #+#    #+#             */
/*   Updated: 2024/10/29 02:34:55 by hbettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed 
{
	private :
		int					number;
		static const int	bits = 8;
	public :
		Fixed( void );
		Fixed( int raw );
		Fixed( float raw );
		Fixed( const Fixed &other );
		~Fixed();
		Fixed	&operator=( const Fixed &other );
		// comparison operators
		bool	operator<( const Fixed &other ) const;
		bool	operator<=( const Fixed &other ) const;
		bool	operator>( const Fixed &other ) const;
		bool	operator>=( const Fixed &other ) const;
		bool	operator==( const Fixed &other ) const;
		bool	operator!=( const Fixed &other ) const;
		// arithmetic operators
		Fixed	&operator+( const Fixed &other );
		Fixed	&operator-( const Fixed &other );
		Fixed	&operator*( const Fixed &other );
		Fixed	&operator/( const Fixed &other );
		// increment / decrement operators
		Fixed	operator++( int );
		Fixed	&operator++( void );
		Fixed	operator--( int );
		Fixed	&operator--( void );
		
		int     getRawBits( void ) const;
		void    setRawBits( int const raw);
		float   toFloat( void ) const;
		int     toInt( void ) const;
};

std::ostream &operator<<( std::ostream &out, const Fixed &other );
