/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 14:35:14 by hulefevr          #+#    #+#             */
/*   Updated: 2024/12/23 14:37:06 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::~Intern() {}

Intern::Intern(const Intern &src) {
	(void)src;
}

Intern &Intern::operator=(const Intern &src) {
	(void)src;
	return *this;
}

AForm *Intern::makeForm(std::string const &form, std::string const &target) const {
	_form forms[3] = {
		&Intern::createPresidentialPardonForm,
		&Intern::createRobotomyRequestForm,
		&Intern::createShrubberyCreationForm
	};
	std::string names[3] = {
		"presidential pardon",
		"robotomy request",
		"shrubbery creation"
	};

	for (int i = 0; i < 3; i++) {
		if (form == names[i]) {
			return (this->*forms[i])(target);
		}
	}
	std::cout << "Form not found" << std::endl;
	return NULL;
}

AForm *Intern::createPresidentialPardonForm(std::string const &target) const {
	return new PresidentialPardonForm(target);
}

AForm *Intern::createRobotomyRequestForm(std::string const &target) const {
	return new RobotomyRequestForm(target);
}

AForm *Intern::createShrubberyCreationForm(std::string const &target) const {
	return new ShrubberyCreationForm(target);
}
