/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 13:53:32 by hulefevr          #+#    #+#             */
/*   Updated: 2024/08/14 14:24:33 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << _name << " created with " << _hitPoints << " hit points, "
		<< _energyPoints << " energy points, " << _attackDamage << " attack damage." << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &other ) : _name(other._name), _hitPoints(other._hitPoints), _energyPoints(other._energyPoints), _attackDamage(other._attackDamage) {
	std::cout << "ClapTrap " << _name << " copied." << std::endl;
}

ClapTrap::ClapTrap( const std::string &name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << _name << " created with " << _hitPoints << " hit points, "
		<< _energyPoints << " energy points, " << _attackDamage << " attack damage." << std::endl;
}

ClapTrap::~ClapTrap( void ) {
	std::cout << "ClapTrap " << _name << " destroyed." << std::endl;
}

ClapTrap	&ClapTrap::operator=( const ClapTrap &o )
{
	if (this != &o)
	{
		_name = o._name;
		_hitPoints = o._hitPoints;
		_energyPoints = o._energyPoints;
		_attackDamage = o._attackDamage;
		std::cout << "ClapTrap " << _name << " assigned." << std::endl;
	}
	return (*this);
}

/*******************************************************************************************/

void	ClapTrap::attack( const std::string &target)
{
	if (_hitPoints > 0 && _energyPoints > 0)
	{
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
		_energyPoints--;
	} else {
		std::cout << "ClapTrap " << _name << " can't attack. No hit points or energy left." << std::endl;
	}
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	if (_hitPoints > 0)
	{
		_hitPoints -= amount;
		if (_hitPoints < 0) _hitPoints = 0;
		std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage! Remaining hit points : " << _hitPoints << std::endl;
	} else {
		std::cout << "ClapTrap " << _name << " is already destroyed and can't take more damage!" << std::endl;
	} 
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	if (_hitPoints > 0 && _energyPoints > 0)
	{
		_hitPoints += amount;
		_energyPoints--;
		std::cout << "ClapTrap " << _name << " repairs itself, recovering " << amount << " hit points! Current hit points : " << _hitPoints << std::endl;
		std::cout << _name << " now has " << _energyPoints << " energy points left." << std::endl;
	} else {
		std::cout << "ClapTrap " << _name << " can't repair. No hit points or energy left!" << std::endl;
	}
}