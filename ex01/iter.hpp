/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puzzlesanalytik <puzzlesanalytik@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/13 17:13:53 by puzzlesanal       #+#    #+#             */
/*   Updated: 2026/06/13 17:40:56 by puzzlesanal      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>


// -------------------------------------------------
// COLOR
// -------------------------------------------------
#define RESET "\033[0m"
#define BOLD  "\033[1m"
#define RED   "\033[31m"‚
#define GREEN "\033[32m"
#define BLUE  "\033[34m"
#define PINK  "\033[35m"

template<typename T>
void iter(T* adress, int length, void(*f)(const T &element))
{
    for (int i = 0; i < length; i++)
        f(adress[i]);
}

template<typename T>
void display(T array)
{
    std::cout << array << std::endl;
}

#endif