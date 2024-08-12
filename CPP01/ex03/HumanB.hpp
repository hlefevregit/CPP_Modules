/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 15:03:47 by hulefevr          #+#    #+#             */
/*   Updated: 2024/08/12 15:18:34 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

# include "Weapon.hpp"

class HumanB
{
private:
	
	std::string	_name;
	Weapon		*_weapon;

public:

	HumanB( std::string name );
	~HumanB();

	void	attack( void );
	void	setWeapon( Weapon &type);
};


#endif