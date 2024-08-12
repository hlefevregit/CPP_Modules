/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugolefevre <hugolefevre@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 16:44:27 by hugolefevre       #+#    #+#             */
/*   Updated: 2024/08/12 17:12:52 by hugolefevre      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void )
{
	std::cout << "Harl has been constructed" << std::endl;
	return ;
}

Harl::~Harl()
{
	std::cout << "Harl has been destroyed" << std::endl;
	return ;
}

void	Harl::debug( void )
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
	return ;
}

void	Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	return ;
}

void	Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month." << std::endl;
	return ;
}

void	Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	return ;
}

void	Harl::complain( std::string level )
{
	std::string	all[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void		(Harl::*ptr_functin[4]) ( void ) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int s = 0;
	if (level.empty())
		return ;

	for (int i = 0; i < 4; i++)
	{
		if (all[i] == level)
		{
			while (i != 4)
			{
				(this->*ptr_functin[i])();
				i++;
				s = 1;
			}
		}
	}
	if (s == 0)
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;

	return ;
}