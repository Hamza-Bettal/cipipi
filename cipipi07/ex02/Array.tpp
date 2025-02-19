/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbettal <hbettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 20:43:19 by hbettal           #+#    #+#             */
/*   Updated: 2025/02/18 21:17:22 by hbettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
Array<T>::Array( void ) : data(NULL), size(0)
{
}

template <typename T>
Array<T>::Array( unsigned int n ) : data(new T[n]), size(n)
{
}

template <typename T>