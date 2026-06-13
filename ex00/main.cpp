/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puzzlesanalytik <puzzlesanalytik@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/13 16:58:28 by puzzlesanal       #+#    #+#             */
/*   Updated: 2026/06/13 17:41:08 by puzzlesanal      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main()
{
    int a = 42;
    int b = 0;
    
    std::cout << PINK << "====INTEGER====" << RESET << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;

    swap(a, b);

    std::cout << BLUE << "====SWAP====" << RESET << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;

    std::cout << BLUE << "====MIN_MAX====" << RESET << std::endl;
    std::cout << "max: " << max(a, b) << std::endl;
    std::cout << "min: " << min(a, b) << std::endl;


    std::cout<< std::endl;
    float c = 42.0f;
    float d = 0.0f;
    
    std::cout << PINK << "====FLOAT====" << RESET << std::endl;
    std::cout << "c: " << c << std::endl;
    std::cout << "d: " << d << std::endl;

    swap(a, b);

    std::cout << BLUE << "====SWAP====" << RESET << std::endl;
    std::cout << "c: " << c << std::endl;
    std::cout << "d: " << d << std::endl;
    
    std::cout << BLUE << "====MIN_MAX====" << RESET << std::endl;
    std::cout << "max: " << max(c, d) << std::endl;
    std::cout << "min: " << min(c, d) << std::endl;


    std::cout << std::endl;
    char e = 'A';
    char f = 'Z';

    std::cout << PINK << "====CHAR====" << RESET << std::endl;
    std::cout << "e: " << e << std::endl;
    std::cout << "f: " << f << std::endl;

    swap(e, f);

    std::cout << BLUE << "====SWAP====" << RESET << std::endl;
    std::cout << "e: " << e << std::endl;
    std::cout << "f: " << f << std::endl;

    std::cout << BLUE << "====MIN_MAX====" << RESET << std::endl;
    std::cout << "max: " << max(e, f) << std::endl;
    std::cout << "min: " << min(e, f) << std::endl;

    return (0);
}
