/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 17:38:52 by hulefevr          #+#    #+#             */
/*   Updated: 2025/01/10 17:42:39 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	if (ac != 2) {
		std::cerr << "Usage: ./btc [filename]" << std::endl;
		return 1;
	}
	
	BitcoinExchange exchange;
	exchange.processInput(std::string(av[1]));
	return 0;
}