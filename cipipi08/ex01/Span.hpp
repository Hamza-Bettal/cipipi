/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbettal <hbettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 15:17:22 by hbettal           #+#    #+#             */
/*   Updated: 2025/02/22 16:02:15 by hbettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <algorithm>

class Span
{
    private:
        int     *data;
        unsigned int size;
        unsigned int curr;

    public:
        Span( void );
        Span( unsigned int N );
        Span( const Span &other );
        ~Span();

        Span &operator=( const Span &other );

        void addNumber( int num );
        int shortestSpan( void );
        int longestSpan( void );
};