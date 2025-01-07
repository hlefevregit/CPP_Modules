/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 14:01:20 by hulefevr          #+#    #+#             */
/*   Updated: 2025/01/07 14:04:55 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template <typename T>
void iter(T *array, int lenght, void (*func)(T &))
{
	if (!array || !func)
		return ;
	for (int i = 0; i < lenght; i++)
	{
		func(array[i]);
	}
}


#endif