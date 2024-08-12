/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 14:57:07 by hulefevr          #+#    #+#             */
/*   Updated: 2024/08/12 15:19:35 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon ) : _name(name), _weapon(weapon)
{
	std::cout << "Human A " << name << " constructed" << std::endl;
	return ;
}

HumanA::~HumanA()
{
	std::cout << "Human A destroyed" << std::endl;
	return ;
}

void	HumanA::attack( void )
{
	std::cout << this->_name << " attacks with their " << _weapon.getType() << std::endl;

	return ;
}