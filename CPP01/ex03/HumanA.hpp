/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 14:57:17 by hulefevr          #+#    #+#             */
/*   Updated: 2024/08/12 15:12:47 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

# include "Weapon.hpp"

class HumanA
{
private:
	
	std::string _name;
	Weapon		&_weapon;

public:

	HumanA( std::string name, Weapon &weapon);
	~HumanA();
	
	void	attack( void );
};




#endif