/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbettal <hbettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 01:08:55 by hbettal           #+#    #+#             */
/*   Updated: 2024/12/05 17:48:17 by hbettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{}

Point::Point( const float x, const float y ) : _x(x), _y(y)
{}

Point::~Point()
{
}

Point &Point::operator=( const Point &other )
{
	(void)other;
	return (*this);
}

Fixed Point::getX()
{
	return (this->_x);
}

Fixed Point::getY()
{
	return (this->_y);
}

float   area( Point a, Point b, Point c )
{
	Fixed   Area;

	Area = a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY());
	return (abs(Area.toFloat()) / 2);
}

bool    bsp( Point const a, Point const b, Point const c, Point const point )
{
	float   triangle, triangle1, triangle2, triangle3;

	triangle = area(a, b, c);
	triangle1 = area(point, b, c);
	triangle2 = area(a, point, c);
	triangle3 = area(a, b, point);

	return (triangle == triangle1 + triangle2 + triangle3);
}
