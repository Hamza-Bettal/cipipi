/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbettal <hbettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 09:16:58 by hbettal           #+#    #+#             */
/*   Updated: 2024/10/26 12:09:42 by hbettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::setname(std::string name)
{
    this->_name = name;
}

void    Zombie::announce()
{
    std::cout << _name + ": BraiiiiiiinnnzzzZ...";
    std::cout << std::endl;
}
