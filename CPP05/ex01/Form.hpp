/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 14:22:09 by hulefevr          #+#    #+#             */
/*   Updated: 2024/12/18 14:44:41 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string _name;
	const int _gradeToSign;
	const int _gradeToExecute;
	bool _isSigned;
public:
	Form(std::string const &name, int const gradeToSign, int const gradeToExecute);
	~Form();
	Form(const Form &src);
	Form &operator=(const Form &src);

	std::string const &getName() const;
	int getGradeToSign() const;
	int getGradeToExecute() const;
	bool isSigned() const;

	void beSigned(const Bureaucrat &bureaucrat);
	
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

};

std::ostream &operator<<(std::ostream &out, Form const &form);

#endif