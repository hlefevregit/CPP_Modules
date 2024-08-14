/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 15:11:49 by hulefevr          #+#    #+#             */
/*   Updated: 2024/08/14 15:31:21 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
	
	std::string	_name;
	
public:
	
	DiamondTrap( void );
	DiamondTrap( const DiamondTrap &other );
	DiamondTrap( const std::string &name);
	~DiamondTrap( void );
	DiamondTrap	&operator=( const DiamondTrap &o );

	void	whoAmI( void );
	void	attack( const std::string &target );
};



#endif