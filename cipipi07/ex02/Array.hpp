/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbettal <hbettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 20:40:26 by hbettal           #+#    #+#             */
/*   Updated: 2025/02/19 00:56:59 by hbettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>
class Array
{
    private:
        T               *data;
        unsigned int    size;

    public:
        Array( void );
        Array( unsigned int n );
        Array( const Array &other );

        Array &operator=( const Array &other );
        Array &operator new[]( const );
        
        
};

// #include "Array.tpp"