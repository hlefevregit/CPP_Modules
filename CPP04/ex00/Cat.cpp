/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugolefevre <hugolefevre@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 17:45:26 by hugolefevre       #+#    #+#             */
/*   Updated: 2024/08/16 17:45:44 by hugolefevre      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    this->type = "Cat";
    std::cout << "Cat: Constructeur par défaut appelé" << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat: Destructeur appelé" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other) {
    std::cout << "Cat: Constructeur de recopie appelé" << std::endl;
}

Cat &Cat::operator=(const Cat &other) {
    if (this != &other) {
        Animal::operator=(other);
    }
    std::cout << "Cat: Opérateur d'affectation appelé" << std::endl;
    return *this;
}

void Cat::makeSound() const {
    std::cout << "Cat: Meow! Meow!" << std::endl;
}