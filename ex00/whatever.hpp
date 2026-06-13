/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puzzlesanalytik <puzzlesanalytik@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/13 16:57:01 by puzzlesanal       #+#    #+#             */
/*   Updated: 2026/06/13 17:40:59 by puzzlesanal      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

// -------------------------------------------------
// COLOR
// -------------------------------------------------
#define RESET "\033[0m"
#define BOLD  "\033[1m"
#define RED   "\033[31m"
#define GREEN "\033[32m"
#define BLUE  "\033[34m"
#define PINK  "\033[35m"

template <typename T>
T const & min(T const &a, T const &b)
{
    return (a < b ? a : b);
}

template <typename T>
T const & max(T const &a, T const &b)
{
    return (a > b ? a : b);
}

template <typename T>
void swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

#endif