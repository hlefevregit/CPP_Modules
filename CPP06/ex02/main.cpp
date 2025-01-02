/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 15:43:55 by hulefevr          #+#    #+#             */
/*   Updated: 2025/01/02 15:50:19 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Functions.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
	std::srand(std::time(0));
	
	Base *base = generate();
	std::cout << "Pointer: ";
	identify(base);
	
	std::cout << "Reference: ";
	identify(*base);
	delete base;
	return 0;
}