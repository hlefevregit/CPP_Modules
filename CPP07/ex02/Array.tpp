/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 14:13:49 by hulefevr          #+#    #+#             */
/*   Updated: 2025/01/07 14:20:55 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array() : array(NULL), _size(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : array(new T[n]()), _size(n) {}

template <typename T>
Array<T>::Array(const Array &src) : array(new T[src._size]()), _size(src._size)
{
	for (unsigned int i = 0; i < _size; i++)
		array[i] = src.array[i];
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &src)
{
	if (this != &src)
	{
		if (array)
			delete[] array;
		array = new T[src._size]();
		_size = src._size;
		for (unsigned int i = 0; i < _size; i++)
			array[i] = src.array[i];
	}
	return *this;
}

template <typename T>
Array<T>::~Array()
{
	if (array)
		delete[] array;
}

template <typename T>
T &Array<T>::operator[](unsigned int index)
{
	if (index >= _size)
		throw std::out_of_range("Index out of range");
	return array[index];
}

template <typename T>
const T &Array<T>::operator[](unsigned int index) const
{
	if (index >= _size)
		throw std::out_of_range("Index out of range");
	return array[index];
}

template <typename T>
unsigned int Array<T>::size() const
{
	return _size;
}
