/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbettal <hbettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:43:19 by hbettal           #+#    #+#             */
/*   Updated: 2024/11/30 16:18:22 by hbettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Default Constructor Called\n";
}

Brain::Brain( Brain &other )
{
    (void)other;
    std::cout << "Brain Copy Constructor Called\n";
}

Brain::~Brain()
{
    std::cout << "Brain Destructor Called\n";
}

Brain &Brain::operator=( Brain &other )
{
    return (other);
}
