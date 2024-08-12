/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 13:44:12 by hulefevr          #+#    #+#             */
/*   Updated: 2024/08/12 14:25:52 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string name )
{
	this->_name = name;
	std::cout << _name << " has been summoned" << std::endl;
	return ;
}

Zombie::Zombie( void ) {

	std::cout << "A new zombie was born ! :)" << std::endl;

	return ;
}

Zombie::~Zombie()
{
	std::cout << _name << " has been destroyed" << std::endl;
	return ;
}

void	Zombie::announce( void )
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

void	Zombie::setName( std::string name)
{
	this->_name = name;
	return ;
}
