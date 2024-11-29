/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbettal <hbettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 22:57:41 by hbettal           #+#    #+#             */
/*   Updated: 2024/10/31 21:08:10 by hbettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void )
{
	Point a(0, 1);
	Point b(1, 2);
	Point c(2, 1);
	Point p(1, 1.5);

	if (bsp(a, b, c, p))
		std::cout << "the point is inside the triangle" << std::endl;
	else
		std::cout << "the point is not inside the triangle" << std::endl;
	return 0;
}
