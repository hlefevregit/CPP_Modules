/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugolefevre <hugolefevre@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 13:15:15 by hugolefevre       #+#    #+#             */
/*   Updated: 2024/08/16 17:46:24 by hugolefevre      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("") {
    std::cout << "Animal: Constructeur par défaut appelé" << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal: Destructeur appelé" << std::endl;
}

Animal::Animal(const Animal& other) : type(other.type) {
    std::cout << "Animal: Constructeur de recopie appelé" << std::endl;
}

Animal &Animal::operator=(const Animal &other) {
    if (this != &other) {
        this->type = other.type;
    }
    std::cout << "Animal: Opérateur d'affectation appelé" << std::endl;
    return *this;
}

void Animal::makeSound() const {
    std::cout << "Animal: Un son indéfini!" << std::endl;
}

std::string Animal::getType() const {
    return this->type;
}