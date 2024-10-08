/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbettal <hbettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 09:17:12 by hbettal           #+#    #+#             */
/*   Updated: 2024/09/26 21:31:32 by hbettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Zombie
{
    private :
        std::string _name;

    public :
        Zombie(std::string name);
        ~Zombie();
        void    announce();
};

Zombie  *newZombie(std::string name);
void    randomChump(std::string name);
