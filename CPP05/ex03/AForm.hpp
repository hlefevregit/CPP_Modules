/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 14:46:56 by hulefevr          #+#    #+#             */
/*   Updated: 2024/12/18 14:50:53 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
private:
	const std::string _name;
	const int _gradeToSign;
	const int _gradeToExecute;
	bool _isSigned;
	const std::string _target;
public:
	
	AForm(std::string const &name, int const gradeToSign, int const gradeToExecute , std::string const &target);
	virtual ~AForm();
	AForm(const AForm &src);
	AForm &operator=(const AForm &src);

	std::string const &getName() const;
	int getGradeToSign() const;
	int getGradeToExecute() const;
	bool isSigned() const;
	std::string const &getTarget() const;

	void beSigned(const Bureaucrat &bureaucrat);
	virtual void execute(Bureaucrat const & executor) const = 0;
	
	class GradeTooHighException : public std::exception {
	public:
		const char *what() const throw() {
			return "Grade is too high";
		}
	};
	class GradeTooLowException : public std::exception {
	public:
		const char *what() const throw() {
			return "Grade is too low";
		}
	};
	class FormNotSignedException : public std::exception {
	public:
		const char *what() const throw() {
			return "Form is not signed";
		}
	};

};

std::ostream &operator<<(std::ostream &out, AForm const &form);

#endif