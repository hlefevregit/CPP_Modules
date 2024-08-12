/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 13:44:12 by hulefevr          #+#    #+#             */
/*   Updated: 2024/08/12 14:04:42 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string name ) : _name(name)
{
	if (_name.empty())
		this->_name = "Default";
	
	std::cout << _name << " has been summoned" << std::endl;
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