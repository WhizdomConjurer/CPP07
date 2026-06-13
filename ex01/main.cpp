/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puzzlesanalytik <puzzlesanalytik@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/13 17:13:45 by puzzlesanal       #+#    #+#             */
/*   Updated: 2026/06/13 17:17:41 by puzzlesanal      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{

    std::cout << BLUE << "===INTEGER===" << RESET << std::endl;
    int a[] = {0, 1, 2, 3, 42};
    iter(a, 5, display);
    std::cout<< std::endl;

    std::cout << BLUE << "===FLOAT===" << RESET << std::endl;
    float b[] = {0.0f, 1.0f, 2.0f, 3.0f, 42.0f};
    iter(b, 4, display);
    std::cout<< std::endl;

    std::cout << BLUE << "===DOUBLE===" << RESET << std::endl;
    double c[] = {0.0f, 1.0f, 2.0f, 3.0f, 42.0f};
    iter(c, -1, display);
    std::cout<< std::endl;

    return (0);
}