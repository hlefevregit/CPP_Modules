/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 13:52:08 by hulefevr          #+#    #+#             */
/*   Updated: 2024/08/14 15:29:39 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	DiamondTrap	Gentil("Zero");
	ScavTrap	Méchant("Wilhelm");

	Gentil.whoAmI();
	Gentil.attack("Wilhelm");

	return (0);
}