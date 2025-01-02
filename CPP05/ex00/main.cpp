/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 14:14:15 by hulefevr          #+#    #+#             */
/*   Updated: 2024/12/18 14:18:16 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat b("Bureaucrat", 50);
		std::cout << "Bureaucrat: " << b.getName() << " Grade: " << b.getGrade() << std::endl;
		b.incrementGrade();
		std::cout << "Bureaucrat: " << b.getName() << " Grade: " << b.getGrade() << std::endl;
		b.decrementGrade();
		std::cout << "Bureaucrat: " << b.getName() << " Grade: " << b.getGrade() << std::endl;
		
		Bureaucrat invalid("Invalid", 151);
	}
	catch(const Bureaucrat::GradeTooHighException & e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(const Bureaucrat::GradeTooLowException & e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}