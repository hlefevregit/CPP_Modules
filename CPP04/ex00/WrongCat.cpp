/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugolefevre <hugolefevre@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 18:03:10 by hugolefevre       #+#    #+#             */
/*   Updated: 2024/08/16 18:04:44 by hugolefevre      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
    this->type = "WrongCat";
    std::cout << "WrongCat: Constructeur par défaut appelé" << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat: Destructeur appelé" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other) {
    std::cout << "WrongCat: Constructeur de recopie appelé" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other) {
    if (this != &other) {
        WrongAnimal::operator=(other);
    }
    std::cout << "WrongCat: Opérateur d'affectation appelé" << std::endl;
    return *this;
}

void WrongCat::makeSound() const {
    std::cout << "WrongCat: Meow! Meow!" << std::endl;
}