/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugolefevre <hugolefevre@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 13:26:11 by hugolefevre       #+#    #+#             */
/*   Updated: 2024/08/16 17:52:20 by hugolefevre      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
    this->type = "Dog";
    std::cout << "Dog: Constructeur par défaut appelé" << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog: Destructeur appelé" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other) {
    std::cout << "Dog: Constructeur de recopie appelé" << std::endl;
}

Dog &Dog::operator=(const Dog &other) {
    if (this != &other) {
        Animal::operator=(other);
    }
    std::cout << "Dog: Opérateur d'affectation appelé" << std::endl;
    return *this;
}

void Dog::makeSound() const {
    std::cout << "Dog: Woof! Woof!" << std::endl;
}