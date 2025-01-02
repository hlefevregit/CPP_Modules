/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 14:14:15 by hulefevr          #+#    #+#             */
/*   Updated: 2024/12/18 14:42:24 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	try
	{
		Bureaucrat bob("Bob", 40);
		Bureaucrat jim("Jim", 150);
		
		Form form("Form", 45, 50);
		std::cout << form << std::endl;

		bob.signForm(form);
		std::cout << form << std::endl;
		
		jim.signForm(form);
		std::cout << form << std::endl;
	}
	catch(const Bureaucrat::GradeTooHighException & e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(const Bureaucrat::GradeTooLowException & e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(const Form::GradeTooHighException & e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(const Form::GradeTooLowException & e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}