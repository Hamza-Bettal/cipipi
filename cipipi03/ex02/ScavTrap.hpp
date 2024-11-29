/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbettal <hbettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 01:50:28 by hbettal           #+#    #+#             */
/*   Updated: 2024/11/08 13:03:03 by hbettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
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
