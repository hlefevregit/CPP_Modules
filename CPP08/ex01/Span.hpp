/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 19:06:13 by hulefevr          #+#    #+#             */
/*   Updated: 2025/01/07 19:10:20 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <exception>

class Span
{
private:
	unsigned int _maxSize;
	std::vector<int> _container;
public:
	Span(unsigned int N);
	Span(const Span &src);
	~Span();

	Span &operator=(const Span &src);
	
	void addNumber(int number);
	int shortestSpan() const;
	int longestSpan() const;

	void addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);

	void print() const;
};



#endif