/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbettal <hbettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 09:16:55 by hbettal           #+#    #+#             */
/*   Updated: 2024/09/23 09:16:56 by hbettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Zombie
{
    private :
        std::string _name;

    public :

        Zombie();
        void    announce();
        void    setname(std::string name);
};

Zombie  *ZombieHorde(int N, std::string name);
