/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 19:10:36 by hulefevr          #+#    #+#             */
/*   Updated: 2025/01/07 19:14:56 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : _maxSize(N) {}

Span::Span(const Span &src) : _maxSize(src._maxSize), _container(src._container) {}

Span::~Span() {}

Span &Span::operator=(const Span &src)
{
	if (this != &src)
	{
		_maxSize = src._maxSize;
		_container = src._container;
	}
	return *this;
}

void Span::addNumber(int number)
{
	if (_container.size() >= _maxSize)
		throw std::runtime_error("Container is full");
	_container.push_back(number);
}

void Span::addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (_container.size() + std::distance(begin, end) > _maxSize)
		throw std::runtime_error("Container is full");
	_container.insert(_container.end(), begin, end);
}

int	Span::shortestSpan() const
{
	if (_container.size() <= 1)
		throw std::runtime_error("Not enough elements");
	std::vector<int> tmp = _container;
	std::sort(tmp.begin(), tmp.end());
	
	int min = tmp[1] - tmp[0];
	for (size_t i = 1; i < tmp.size() - 1; i++)
	{
		if (tmp[i + 1] - tmp[i] < min)
			min = tmp[i + 1] - tmp[i];
	}
	return min;
}

int	Span::longestSpan() const
{
	if (_container.size() <= 1)
		throw std::runtime_error("Not enough elements");
	std::vector<int> tmp = _container;
	std::sort(tmp.begin(), tmp.end());
	return tmp[tmp.size() - 1] - tmp[0];
}

void Span::print() const
{
	for (size_t i = 0; i < _container.size(); i++)
		std::cout << _container[i] << " ";
	std::cout << std::endl;
}
