/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 19:06:05 by hulefevr          #+#    #+#             */
/*   Updated: 2025/01/07 19:18:24 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// int main()
// {
// 	Span sp = Span(5);
// 	sp.addNumber(6);
// 	sp.addNumber(3);
// 	sp.addNumber(17);
// 	sp.addNumber(9);
// 	sp.addNumber(11);
// 	std::cout << sp.shortestSpan() << std::endl;
// 	std::cout << sp.longestSpan() << std::endl;
// 	return 0;
// }

#include <cstdlib> // rand()

int main()
{
    try
    {
        Span sp(5);
        sp.addNumber(10);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        sp.print();
        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;

        try {
            sp.addNumber(42);
        } catch (const std::exception &e) {
            std::cerr << e.what() << std::endl;
        }

        std::cout << "\nTest avec 10 000 nombres aléatoires...\n";
        Span bigSpan(10000);
        std::vector<int> numbers;
        for (int i = 0; i < 10000; ++i)
            numbers.push_back(rand() % 100000);

        bigSpan.addNumbers(numbers.begin(), numbers.end());

        std::cout << "Shortest span: " << bigSpan.shortestSpan() << std::endl;
        std::cout << "Longest span: " << bigSpan.longestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception attrapée: " << e.what() << std::endl;
    }

    return 0;
}