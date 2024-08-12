/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 14:53:23 by hulefevr          #+#    #+#             */
/*   Updated: 2024/08/12 15:17:00 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type )
{
	this->_type = type;
	std::cout << "Class constructed" << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "Class destroyed" << std::endl;
}

void	Weapon::setType( std::string type )
{
	this->_type = type;
	return ;
}

std::string	Weapon::getType( void ) const
{
	return (this->_type);
}