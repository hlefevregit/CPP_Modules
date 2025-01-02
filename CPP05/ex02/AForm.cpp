/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 14:49:34 by hulefevr          #+#    #+#             */
/*   Updated: 2024/12/18 15:12:03 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(std::string const &name, int const gradeToSign, int const gradeToExecute, const std::string &target) : _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute), _isSigned(false), _target(target) {}

AForm::~AForm() {}

AForm::AForm(const AForm &src) : _name(src._name), _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute), _isSigned(src._isSigned), _target(src._target) {}

AForm &AForm::operator=(const AForm &src) {
	if (this != &src) {
		_isSigned = src._isSigned;
	}
	return *this;
}

std::string const &AForm::getName() const {
	return _name;
}
bool AForm::isSigned() const {
	return _isSigned;
}
int AForm::getGradeToSign() const {
	return _gradeToSign;
}
int AForm::getGradeToExecute() const {
	return _gradeToExecute;
}
std::string const &AForm::getTarget() const {
	return _target;
}

void AForm::beSigned(const Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() > _gradeToSign) {
		throw GradeTooLowException();
	}
	_isSigned = true;
}

std::ostream &operator<<(std::ostream &out, const AForm &src) {
	out << "Form " << src.getName() << " is ";
	if (!src.isSigned()) {
		out << "not ";
	}
	out << "signed, grade to sign: " << src.getGradeToSign() << ", grade to execute: " << src.getGradeToExecute();
	return out;
}
