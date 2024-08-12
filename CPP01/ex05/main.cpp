/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugolefevre <hugolefevre@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 16:44:15 by hugolefevre       #+#    #+#             */
/*   Updated: 2024/08/12 17:01:46 by hugolefevre      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	Harl;

	Harl.complain("DEBUG");

	Harl.complain("INFO");

	Harl.complain("WARNING");

	Harl.complain("ERROR");

	Harl.complain("invalid level");

	Harl.complain("");

	return (0);
}
