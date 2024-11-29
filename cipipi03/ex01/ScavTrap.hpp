/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbettal <hbettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 01:50:28 by hbettal           #+#    #+#             */
/*   Updated: 2024/11/08 11:55:13 by hbettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : ClapTrap
{
	public :
		ScavTrap( void );
		ScavTrap( std::string _name );
		ScavTrap( ScavTrap &other );
		ScavTrap operator=( ScavTrap &other );
		~ScavTrap();
		void	attack( const std::string& target );
		void	guardGate();
};
