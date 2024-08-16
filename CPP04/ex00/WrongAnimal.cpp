/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugolefevre <hugolefevre@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 18:01:02 by hugolefevre       #+#    #+#             */
/*   Updated: 2024/08/16 18:02:26 by hugolefevre      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
    std::cout << "WrongAnimal: Constructeur par défaut appelé" << std::endl;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal: Destructeur appelé" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) {
    *this = other;
    std::cout << "WrongAnimal: Constructeur de recopie appelé" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
    if (this != &other) {
        this->type = other.type;
    }
    std::cout << "WrongAnimal: Opérateur d'affectation appelé" << std::endl;
    return *this;
}

void WrongAnimal::makeSound() const {
    std::cout << "WrongAnimal: WrongAnimal sound!" << std::endl;
}

std::string WrongAnimal::getType() const {
    return this->type;
}
