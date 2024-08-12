/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 13:57:20 by hugolefevre       #+#    #+#             */
/*   Updated: 2024/08/12 16:34:22 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <limits>

PhoneBook::PhoneBook() {
	_contactCount = 0;
}

void	PhoneBook::addContact()
{
	std::string	fName, lName, nName, number, secret;

	std::cout << "Enter First Name: ";
    std::getline(std::cin, fName);
    std::cout << "Enter Last Name: ";
    std::getline(std::cin, lName);
    std::cout << "Enter Nickname: ";
    std::getline(std::cin, nName);
    std::cout << "Enter Phone Number: ";
    std::getline(std::cin, number);
    std::cout << "Enter Darkest Secret: ";
    std::getline(std::cin, secret);

	if (fName.empty() || lName.empty() || nName.empty() || number.empty() || secret.empty()) {
        std::cout << "Error: All fields must be filled!" << std::endl;
        return;
    }
	int index = _contactCount % 8;
	_contacts[index].setContact(fName, lName, nName, number, secret);
	_contactCount++;
	std::cout << "Contact added successfully !" << std::endl;
}
void	PhoneBook::searchContact() const
{
	if (_contactCount == 0) {
        std::cout << "PhoneBook is empty!" << std::endl;
        return;
    }
	std::cout << std::setw(10) << "Index" << "|" << std::setw(10) << "First Name" << "|" << std::setw(10) << "Last Name" << "|" << std::setw(10) << "Nickname" << "|" << std::endl;
	for (int i = 0; i < _contactCount && i < 8; i++) {
    	_contacts[i].displayContactSummary(i + 1);
    }

	int index;
	while (!(std::cin >> index) || index < 1 || index > _contactCount || index > 8) {
        // Clear the error flag on cin
        std::cin.clear();
        // Ignore the rest of the input (up to 1000 characters or until newline)
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid index! Please enter a number between 1 and " << std::min(_contactCount, 8) << ": ";
    }
    
    // Clear the input buffer before the next prompt
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	_contacts[index - 1].displayContactDetails();

}
