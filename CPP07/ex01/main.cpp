/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 14:01:05 by hulefevr          #+#    #+#             */
/*   Updated: 2025/01/07 14:06:41 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

void print(int &i)
{
	std::cout << i << " ";
}

void add(int &i)
{
	i += 1;
}

void sub(int &i)
{
	i -= 1;
}

void mul(int &i)
{
	i *= 2;
}

void div(int &i)
{
	i /= 2;
}

int main()
{
	int tab[] = {0, 1, 2, 3, 4};
	iter(tab, 5, print);
	std::cout << std::endl;
	iter(tab, 5, add);
	iter(tab, 5, print);
	std::cout << std::endl;
	iter(tab, 5, sub);
	iter(tab, 5, print);
	std::cout << std::endl;
	iter(tab, 5, mul);
	iter(tab, 5, print);
	std::cout << std::endl;
	iter(tab, 5, div);
	iter(tab, 5, print);
	std::cout << std::endl;
	return 0;
}