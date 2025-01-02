/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 14:24:59 by hulefevr          #+#    #+#             */
/*   Updated: 2024/12/23 14:25:27 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main()
{
	Bureaucrat b1("Bureaucrat1", 1);
	Bureaucrat b2("Bureaucrat2", 150);

	PresidentialPardonForm f1("target1");
	RobotomyRequestForm f2("target2");
	ShrubberyCreationForm f3("target3");

	b1.signForm(f1);
	b1.signForm(f2);
	b1.signForm(f3);

	b1.executeForm(f1);
	b1.executeForm(f2);
	b1.executeForm(f3);

	b2.signForm(f1);
	b2.signForm(f2);
	b2.signForm(f3);

	b2.executeForm(f1);
	b2.executeForm(f2);
	b2.executeForm(f3);

	return 0;
}