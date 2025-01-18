/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 15:03:39 by hulefevr          #+#    #+#             */
/*   Updated: 2025/01/18 15:37:02 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _name(name)
{
	std::cout << "Human B " << name << " constructed" << std::endl;
	return ;
}

HumanB::~HumanB()
{
	std::cout << "Human B destroyed" << std::endl;
	return ;
}

void	HumanB::attack( void ) {

	if (this->_weapon == NULL)
	{
		std::cout << this->_name << " has no weapon" << std::endl;
		return ;
	}
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;

	return ;
}

void	HumanB::setWeapon( Weapon &type)
{
	this->_weapon = &type;
	return ;
}