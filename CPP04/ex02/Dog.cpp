/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 13:26:11 by hugolefevre       #+#    #+#             */
/*   Updated: 2025/01/18 14:56:54 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal() , brain(new Brain) {
    std::cout << "Dog constructed" << std::endl;
    type = "Dog";
}

Dog::Dog(const Dog &other) : AAnimal(other) {
    if (other.brain)
        this->brain = new Brain(*other.brain);
    else
        this->brain = 0;
    brain = new Brain(*other.brain);
    std::cout << "Dog copy constructed" << std::endl;
}

Dog &Dog::operator=(const Dog &other) {
    if (this != &other) {
        AAnimal::operator=(other);
        delete brain;
        brain = new Brain(*other.brain);
    }
    std::cout << "Dog copy assignment operator called" << std::endl;
    return *this;
}

Dog::~Dog() {
    delete brain;
    std::cout << "Dog destructed" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "Woof" << std::endl;
}

Brain *Dog::getBrain() const {
    return brain;
}