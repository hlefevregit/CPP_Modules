/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 15:15:34 by hulefevr          #+#    #+#             */
/*   Updated: 2024/08/14 15:36:14 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) : ClapTrap("Diamond_clap_name"), FragTrap(), ScavTrap(), _name("Diamond")
{
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap " << _name << " created with default settings." << std::endl;
}
DiamondTrap::DiamondTrap( const DiamondTrap &other ) : ClapTrap(other), FragTrap(other), ScavTrap(other), _name(other._name)
{
	std::cout << "DiamondTrap " << _name << " copied." << std::endl;
}
DiamondTrap::DiamondTrap( const std::string &name) : ClapTrap(name + "_clap_name"), FragTrap(), ScavTrap()
{
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap " << _name << " created." << std::endl;	
}

DiamondTrap	&DiamondTrap::operator=( const DiamondTrap &o) {
	if (this != &o)
	{
		ClapTrap::operator=(o);
		FragTrap::operator=(o);
		ScavTrap::operator=(o);
		_name = o._name;
		std::cout << "DiamondTrap " << _name << " assigned." << std::endl;
	}
	return *this;
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "DiamondTrap " << _name << " destroyed." << std::endl;
}

void	DiamondTrap::whoAmI( void ) {
	std::cout << "DiamondTrap name: " << _name << ", ClapTrap name: " << ClapTrap::_name << std::endl;
}

void	DiamondTrap::attack( const std::string &target ) {
	ScavTrap::attack(target);
}