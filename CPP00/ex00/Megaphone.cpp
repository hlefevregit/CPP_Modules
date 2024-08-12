/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugolefevre <hugolefevre@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 13:40:00 by hugolefevre       #+#    #+#             */
/*   Updated: 2024/08/09 13:46:45 by hugolefevre      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <cstring>

int	main(int ac, char **av) {
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < ac; ++i)
		{
			for (size_t j = 0; j < std::strlen(av[i]); ++j)
			{
				std::cout << (char)std::toupper(av[i][j]);
			}
			if (i < ac - 1)
				std::cout << " ";
		}
		std::cout << std::endl;
	}
	return 0;
}