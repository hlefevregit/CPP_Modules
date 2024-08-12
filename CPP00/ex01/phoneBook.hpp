/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugolefevre <hugolefevre@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 13:53:43 by hugolefevre       #+#    #+#             */
/*   Updated: 2024/08/09 14:19:10 by hugolefevre      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK
# define PHONEBOOK

# include "Contact.hpp"

class PhoneBook
{
private:
	Contact _contacts[8];
	int		_contactCount;
public:
	PhoneBook();
	void	addContact();
	void	searchContact() const;
};

#endif