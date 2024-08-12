/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 14:17:26 by hulefevr          #+#    #+#             */
/*   Updated: 2024/08/12 14:17:36 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int		N = 3;

	Zombie	*horde = zombieHorde(N, "Monsieur");

	for (int i = 0; i != N; i++) {
		horde[i].announce();
	}

	delete [] horde;

	return (0);
}