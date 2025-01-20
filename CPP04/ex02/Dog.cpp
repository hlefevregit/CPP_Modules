/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 13:26:11 by hugolefevre       #+#    #+#             */
/*   Updated: 2025/01/20 14:39:21 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal() {
    brain = new Brain();
    std::cout << "Dog constructed" << std::endl;
    type = "Dog";
}

Dog::Dog(const Dog &other) : AAnimal(other) {
    brain = other.brain ? new Brain(*other.brain) : 0;
    std::cout << "Dog copy constructed" << std::endl;
}

Dog &Dog::operator=(const Dog &other) {
    if (this != &other) {
        delete brain;
        brain = other.brain ? new Brain(*other.brain) : 0;
    }
    std::cout << "Dog copy assignment operator called" << std::endl;
    return *this;
}

Dog::~Dog() {
    if (brain) {
        delete brain;
        brain = 0;
    }
    std::cout << "Dog destructed" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "Woof" << std::endl;
}

Brain *Dog::getBrain() const {
    return brain;
}