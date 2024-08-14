/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 14:30:00 by hulefevr          #+#    #+#             */
/*   Updated: 2024/08/14 15:00:26 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap()
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap " << _name << " created with default settings." << std::endl;	
}

ScavTrap::ScavTrap( const ScavTrap &other ) : ClapTrap(other)
{
	std::cout << "ScavTrap " << _name << " copied." << std::endl;
}
ScavTrap::ScavTrap( const std::string &name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap " << _name << " created." << std::endl;	
}

ScavTrap	&ScavTrap::operator=( const ScavTrap &o) {
	if (this != &o)
	{
		ClapTrap::operator=(o);
		std::cout << "ScavTrap " << _name << " assigned." << std::endl;
	}
	return *this;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap " << _name << " destroyed." << std::endl;
}

void	ScavTrap::guardGate( void ) {
	std::cout << "ScavTrap " << _name << " is now in Gate Keeper mode." << std::endl;
}

void	ScavTrap::attack( const std::string &target) {
	if (_hitPoints > 0 && _energyPoints > 0)
	{
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
		_energyPoints--;
	} else {
		std::cout << "ScavTrap " << _name << " can't attack. No hit points or energy left." << std::endl;
	}
}
