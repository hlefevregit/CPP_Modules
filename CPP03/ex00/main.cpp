/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 13:52:08 by hulefevr          #+#    #+#             */
/*   Updated: 2024/08/14 14:26:27 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	Gentil("Nécromentienne");
	ClapTrap	Mechant("Jack");
	ClapTrap	Default;

	Gentil.attack( "Jack" );
	Gentil.takeDamage( 5 );
	Gentil.beRepaired( 2 );


	Mechant.attack( "Nécromantienne" );
	Mechant.takeDamage( 10 );
	Mechant.beRepaired( 1 );


	Default.attack( "Random" );
	Default.takeDamage( 4 );
	Default.beRepaired( 9 );

	return (0);
}