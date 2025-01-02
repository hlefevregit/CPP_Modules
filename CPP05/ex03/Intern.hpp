/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 14:31:59 by hulefevr          #+#    #+#             */
/*   Updated: 2024/12/23 14:35:04 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "AForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include <string>

class Intern
{
public:
	Intern();
	~Intern();
	Intern(const Intern &src);
	Intern &operator=(const Intern &src);
	AForm *makeForm(std::string const &form, std::string const &target) const;
private:
	typedef AForm* (Intern::*_form)(std::string const &target) const;

	AForm *createPresidentialPardonForm(std::string const &target) const;
	AForm *createRobotomyRequestForm(std::string const &target) const;
	AForm *createShrubberyCreationForm(std::string const &target) const;
};




#endif