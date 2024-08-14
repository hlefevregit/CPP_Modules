/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 14:28:30 by hulefevr          #+#    #+#             */
/*   Updated: 2024/08/14 14:54:25 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:

public:
	ScavTrap( void );
	ScavTrap( const ScavTrap &other );
	ScavTrap( const std::string &name);
	~ScavTrap( void );
	ScavTrap	&operator=( const ScavTrap &o );

	void	guardGate( void );
	void	attack( const std::string &target);
};



#endif