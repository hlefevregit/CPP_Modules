/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 13:44:22 by hulefevr          #+#    #+#             */
/*   Updated: 2024/08/12 14:07:26 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <cctype>
# include <cstring>

class Zombie
{

private:

	std::string	_name;

public:

	Zombie( std::string name );
	~Zombie( void );
	
	void	announce( void );
	void	randomChump( std::string name );
	Zombie* newZombie( std::string name );
};




#endif