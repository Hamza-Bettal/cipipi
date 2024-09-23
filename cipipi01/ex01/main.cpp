/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbettal <hbettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 09:17:02 by hbettal           #+#    #+#             */
/*   Updated: 2024/09/23 09:17:03 by hbettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int i = 5;
    Zombie *horde = ZombieHorde(i, "7mar");

    std::cout << "exampleee :" << std::endl;
    i = 0;
    while (i < 5)
    {
        horde[i].announce();
        i++;
    }
    delete[] horde;
}
