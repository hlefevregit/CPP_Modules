/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 15:02:54 by hulefevr          #+#    #+#             */
/*   Updated: 2024/08/14 15:09:07 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap()
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap " << _name << " created with default settings." << std::endl;
}
FragTrap::FragTrap( const FragTrap &other ) : ClapTrap(other)
{
	std::cout << "FragTrap " << _name << " copied." << std::endl;
}
FragTrap::FragTrap( const std::string &name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap " << _name << " created." << std::endl;	
}

FragTrap	&FragTrap::operator=( const FragTrap &o) {
	if (this != &o)
	{
		ClapTrap::operator=(o);
		std::cout << "FragTrap " << _name << " assigned." << std::endl;
	}
	return *this;
}

FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap " << _name << " destroyed." << std::endl;
}

void	FragTrap::highFivesGuys( void ) {
	std::cout << "FragTrap " << _name << " requests a positive high five!" << std::endl;
}

void	FragTrap::attack( const std::string &target) {
	if (_hitPoints > 0 && _energyPoints > 0)
	{
		std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
		_energyPoints--;
	} else {
		std::cout << "FragTrap " << _name << " can't attack. No hit points or energy left." << std::endl;
	}
}
