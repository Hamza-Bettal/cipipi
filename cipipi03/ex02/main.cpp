/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbettal <hbettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 22:32:15 by hbettal           #+#    #+#             */
/*   Updated: 2024/11/08 13:10:28 by hbettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ScavTrap b("GGG");
	ClapTrap a(b);

	a.attack("zombie");
	a.beRepaired(100);
}