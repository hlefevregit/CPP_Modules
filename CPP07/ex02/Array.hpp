/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 14:08:14 by hulefevr          #+#    #+#             */
/*   Updated: 2025/01/07 14:20:25 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>
# include <exception>

template <typename T>
class Array
{
private:
	T *array;
	unsigned int _size;
public:
	Array();
	Array(unsigned int n);
	Array(const Array &src);
	Array &operator=(const Array &src);
	~Array();

	T &operator[](unsigned int index);
	const T &operator[](unsigned int index) const;
	unsigned int size() const;
};

# include "Array.tpp"

#endif