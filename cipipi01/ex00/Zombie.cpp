/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbettal <hbettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 09:17:14 by hbettal           #+#    #+#             */
/*   Updated: 2024/10/03 14:41:49 by hbettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
}

Zombie::~Zombie()
{
    std::cout << this->_name << " Detructor called" << std::endl;
}

void    Zombie::announce()
{
    std::cout << _name + ": BraiiiiiiinnnzzzZ...";
    std::cout << std::endl;
}

