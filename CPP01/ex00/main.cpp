/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 13:43:02 by hulefevr          #+#    #+#             */
/*   Updated: 2024/08/12 14:00:01 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main( void )
{
// * Constructor called
	Zombie	Construct("Constructor");

// * Zombie alloué DYNAMIQUEMENT à l'aide de l'INSTANCE 'Construct' de la CLASS 'Zombie' ===> HEAP
// * La fonction donne un nom à l'INSTANCE 'zombieCreation'
	Zombie	*zombieCreation = Construct.newZombie("Zombie [2]");

// * Zombie alloué AUTOMATIQUEMENT à l'aide de l'INSTANCE 'Construct' de la CLASS 'Zombie' ===> STACK
	Construct.randomChump("Zombie [1]");

// * Annonce du Zombie DYNAMIQUE (HEAP)
	zombieCreation->announce();

// * Libération de la mémoire (qui a été allouée aà partir de la fonction newZombie() )
	delete zombieCreation;

	return (0);
}
