/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:36:11 by hulefevr          #+#    #+#             */
/*   Updated: 2025/01/14 16:35:42 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main (int ac, char **av)
{
	if (ac == 1)
	{
		std::cerr << "Usage: ./PmergeMe [number ...]" << std::endl;
		return 1;
	}
	
	std::cout << "Before : ";
	for (int i = 0; i < ac; i++)
	{
		std::cout << av[i] << " ";
	}
	std::cout << std::endl;

	std::vector<int> vector;
	std::deque<int> deque;

	for (int i = 1; i < ac; i++)
	{
		if (!isdigit(av[i][0]))
		{
			std::cerr << "Error: invalid number." << std::endl;
			return 1;
		}
		vector.push_back(atoi(av[i]));
		deque.push_back(atoi(av[i]));
	}
	
	PmergeMe pmergeMe;

	clock_t start1 = clock();
	pmergeMe.sortVector(vector);
	clock_t end1 = clock();
	double elapsed1 = double(end1 - start1) / CLOCKS_PER_SEC;

	clock_t start2 = clock();
	pmergeMe.sortDeque(deque);
	clock_t end2 = clock();
	double elapsed2 = double(end2 - start2) / CLOCKS_PER_SEC;

	std::cout << "After  : ";
	for (int i = 0; i < ac - 1; i++)
	{
		std::cout << vector[i] << " ";
	}
	std::cout << std::endl;
	
	std::cout << "Time for std::vector: with " << ac - 1 << " elements : " << elapsed1 << "s" << std::endl;
	std::cout << "Time for std::deque with " << ac - 1 << " elements : " << elapsed2 << "s" << std::endl;
	return 0;
}