/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 14:34:55 by hulefevr          #+#    #+#             */
/*   Updated: 2025/01/08 14:43:21 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_TPP
# define MUTANTSTACK_TPP

# include "MutantStack.hpp"
# include <iostream>

template <typename T>
MutantStack<T>::MutantStack() {}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &other) : std::stack<T>(other) {}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack &other)
{
	if (this != &other)
		std::stack<T>::operator=(other);
	return *this;
}

template <typename T>
MutantStack<T>::~MutantStack() {}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() { return std::stack<T>::c.begin(); }

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() { return std::stack<T>::c.end(); }

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin() const { return std::stack<T>::c.begin(); }

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::end() const { return std::stack<T>::c.end(); }

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin() { return std::stack<T>::c.rbegin(); }

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend() { return std::stack<T>::c.rend(); }

template <typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rbegin() const { return std::stack<T>::c.rbegin(); }

template <typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rend() const { return std::stack<T>::c.rend(); }


#endif