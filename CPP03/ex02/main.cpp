/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 13:52:08 by hulefevr          #+#    #+#             */
/*   Updated: 2024/08/14 15:09:43 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	Gentil("Sirene");
	FragTrap	Mechant("Sadique");
	FragTrap	Default;
	
	std::cout << std::endl << std::endl;

	Gentil.attack( "Sadique" );
	Gentil.takeDamage( 5 );
	Gentil.beRepaired( 2 );
	Gentil.highFivesGuys();
	std::cout << std::endl << std::endl;


	Mechant.attack( "Sirene" );
	Mechant.takeDamage( 3 );
	Mechant.beRepaired( 7 );
	Mechant.highFivesGuys();
	std::cout << std::endl << std::endl;


	Default.attack( "Random" );
	Default.takeDamage( 4 );
	Default.beRepaired( 9 );
	Default.highFivesGuys();
	std::cout << std::endl << std::endl;

	return (0);
}