/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugolefevre <hugolefevre@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 13:56:58 by hugolefevre       #+#    #+#             */
/*   Updated: 2024/08/09 14:34:47 by hugolefevre      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

void	Contact::setContact(std::string fName, std::string lName, std::string nName, std::string number, std::string secret)
{
	_firstName = fName;
	_lastName = lName;
	_nickName = nName;
	_phoneNumber = number;
	_darkestSecret = secret;
}

void	Contact::displayContactSummary(int index) const
{
	std::cout << std::setw(10) << index << "|";
	printColumn(_firstName);
	printColumn(_lastName);
	printColumn(_nickName);
	std::cout << std::endl;
}

void	Contact::printColumn(std::string str) const
{
	if (str.length() > 10)
        std::cout << std::setw(9) << str.substr(0, 9) + "." << "|";
    else
        std::cout << std::setw(10) << str << "|";
}

void	Contact::displayContactDetails() const
{
    std::cout << "First Name: " << _firstName << std::endl;
    std::cout << "Last Name: " << _lastName << std::endl;
    std::cout << "Nickname: " << _nickName << std::endl;
    std::cout << "Phone Number: " << _phoneNumber << std::endl;
    std::cout << "Darkest Secret: " << _darkestSecret << std::endl;
}