/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 15:03:16 by hulefevr          #+#    #+#             */
/*   Updated: 2024/08/14 15:34:36 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
private:

public:
	FragTrap( void );
	FragTrap( const FragTrap &other );
	FragTrap( const std::string &name);
	~FragTrap( void );
	FragTrap	&operator=( const FragTrap &o );

	void	highFivesGuys( void );
	void	attack( const std::string &target );
};




#endif