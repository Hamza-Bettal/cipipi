/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbettal <hbettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 01:50:28 by hbettal           #+#    #+#             */
/*   Updated: 2024/11/10 10:41:06 by hbettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public :
		ScavTrap();
		ScavTrap( std::string _name );
		ScavTrap( ScavTrap &other );
		ScavTrap &operator=( ScavTrap &other );
		~ScavTrap();
		void	attack( const std::string& target );
		void	guardGate( void );
};
