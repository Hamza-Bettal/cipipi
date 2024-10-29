/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbettal <hbettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 11:39:25 by hbettal           #+#    #+#             */
/*   Updated: 2024/10/27 13:27:14 by hbettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed 
{
	private :
		int number;
		static const int bits;
	public :
		Fixed( void );
		Fixed( Fixed &other );
		~Fixed();
		Fixed &operator=( const Fixed &other );
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};
