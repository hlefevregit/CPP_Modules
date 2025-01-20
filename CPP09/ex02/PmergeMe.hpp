/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:32:03 by hulefevr          #+#    #+#             */
/*   Updated: 2025/01/14 16:30:23 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <string>
# include <vector>
# include <algorithm>
# include <deque>
# include <iterator>
# include <ctime>

class PmergeMe
{
private:
	void	merge(std::vector<int> &leftArray, std::vector<int> &rightArray, std::vector<int> &array);
	void	mergeSort(std::vector<int> &array);
	
	void	merge(std::deque<int> &leftArray, std::deque<int> &rightArray, std::deque<int> &array);
	void    mergeSort(std::deque<int> &array);
public:
	PmergeMe();
	~PmergeMe();

	void	sortVector(std::vector<int> &array);
	void	sortDeque(std::deque<int> &array);
};



#endif