/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbettal <hbettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 20:29:12 by hbettal           #+#    #+#             */
/*   Updated: 2024/11/26 14:00:00 by hbettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain
{
    public :
        std::string ideas[100];
        
        Brain( void );
        Brain( Brain &other );
        ~Brain();

        Brain &operator=( Brain &other );
};
