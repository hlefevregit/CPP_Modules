/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 13:58:06 by hulefevr          #+#    #+#             */
/*   Updated: 2024/12/18 14:27:02 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>

class Bureaucrat
{
private:
    const std::string _name;
    int _grade;
public:
    Bureaucrat();
    Bureaucrat(std::string name, int grade);
    ~Bureaucrat();
    Bureaucrat(const Bureaucrat & src);
    Bureaucrat &operator=(const Bureaucrat &src);

    std::string getName() const;
    int getGrade() const;
    void incrementGrade();
    void decrementGrade();
    
    
    class GradeTooHighException : public std::exception
    {
    public:
        const char *what() const throw() {
            return "Grade is too high";
        }
    };
    class GradeTooLowException : public std::exception
    {
    public:
        const char *what() const throw() {
            return "Grade is too low";
        }
    };
};

#endif