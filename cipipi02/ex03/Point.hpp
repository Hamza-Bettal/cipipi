/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbettal <hbettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 01:08:48 by hbettal           #+#    #+#             */
/*   Updated: 2024/12/05 17:46:55 by hbettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Fixed.hpp"
#include <cmath>

class Point
{
	private:
		Fixed const _x;
		Fixed const _y;
	public:
		Point();
		Point( const float x, const float y );
		~Point();
		
		Point	&operator=( const Point &other );
		
		Fixed	getX();
		Fixed	getY();
};

bool bsp( Point const a, Point const b, Point const c, Point const point );
