/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbettal <hbettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 09:16:58 by hbettal           #+#    #+#             */
/*   Updated: 2024/11/29 14:53:11 by hbettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : _name("default")
{
}

void    Zombie::setname(std::string name)
{
    this->_name = name;
}

void    Zombie::announce()
{
    std::cout << _name + ": BraiiiiiiinnnzzzZ...";
    std::cout << std::endl;
}
