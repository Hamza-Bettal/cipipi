/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbettal <hbettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 10:19:51 by hbettal           #+#    #+#             */
/*   Updated: 2024/12/08 05:23:39 by hbettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Diamond_Default_clap_name") , _name("Diamond_Default")
{
	std::cout << "Default DiamondTrap Constructor Called\n";
	this->hitPoint = FragTrap::hitPoint;
	this->energyPoint = ScavTrap::energyPoint;
	this->attackDamage = FragTrap::attackDamage;
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name + "_clap_name")
{
	std::cout << "DiamondTrap Constructor Called\n";
	this->_name = name;
	this->hitPoint = FragTrap::hitPoint;
	this->energyPoint = ScavTrap::energyPoint;
	this->attackDamage = FragTrap::attackDamage;
}

DiamondTrap::DiamondTrap( DiamondTrap &other ) : ClapTrap(other), _name(other._name)
{
	std::cout << "DiamondTrap Copy Constructor Called\n";
}

DiamondTrap &DiamondTrap::operator=( DiamondTrap &other )
{
	std::cout << "DiamondTrap Copy Assignment Operator Called\n";
	if (this != &other)
	{
		ClapTrap::_name = other._name + "_clap_name";
		this->_name = other._name;
		this->hitPoint = other.hitPoint;
		this->energyPoint = other.energyPoint;
		this->attackDamage = other.attackDamage;
	}
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Deconstractor called\n";
}

void	DiamondTrap::whoAmI()
{
	std::cout << "my name is " << this->_name << " and my ClapTrap name is " << ClapTrap::_name << '\n';
	std::cout << this->hitPoint << '\n';
	std::cout << this->energyPoint << '\n';
	std::cout << this->attackDamage << '\n';
}