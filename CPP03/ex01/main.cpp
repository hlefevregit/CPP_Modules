/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 13:52:08 by hulefevr          #+#    #+#             */
/*   Updated: 2024/08/14 14:58:04 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	Gentil("Mordecai");
	ScavTrap	Mechant("Saturn");
	ScavTrap	Default;

	Gentil.attack( "Saturn" );
	Gentil.takeDamage( 5 );
	Gentil.beRepaired( 2 );
	Gentil.guardGate();
	std::cout << std::endl << std::endl;


	Mechant.attack( "Mordecai" );
	Mechant.takeDamage( 3 );
	Mechant.beRepaired( 7 );
	Mechant.guardGate();
	std::cout << std::endl << std::endl;


	Default.attack( "Random" );
	Default.takeDamage( 4 );
	Default.beRepaired( 9 );
	Default.guardGate();
	std::cout << std::endl << std::endl;

	return (0);
}