/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 14:24:59 by hulefevr          #+#    #+#             */
/*   Updated: 2024/12/23 14:40:39 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int	main()
{
	try
	{
		Intern someRandomIntern;
		AForm *rrf;
		
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		if (rrf)
		{
			Bureaucrat bob("Bob", 1);
			bob.signForm(*rrf);
			bob.executeForm(*rrf);
			delete rrf;
		}
		rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
		if (rrf)
		{
			Bureaucrat alice("Alice", 40);
			alice.signForm(*rrf);
			alice.executeForm(*rrf);
			delete rrf;
		}
		rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");

		if (rrf)
		{
			Bureaucrat charlie("Charlie", 140);
			charlie.signForm(*rrf);
			charlie.executeForm(*rrf);
			delete rrf;
		}
		rrf = someRandomIntern.makeForm("shrubbery", "Bender");
		if (rrf) {
			delete rrf;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	

	return 0;
}