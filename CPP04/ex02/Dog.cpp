/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 13:26:11 by hugolefevre       #+#    #+#             */
/*   Updated: 2024/12/18 12:43:04 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal() {
    std::cout << "Dog constructed" << std::endl;
    type = "Dog";
}

Dog::Dog(const Dog &other) : AAnimal(other) {
    if (other.brain)
        this->brain = new Brain(*other.brain);
    else
        this->brain = 0;
    std::cout << "Dog copy constructed" << std::endl;
}

Dog &Dog::operator=(const Dog &other) {
    if (this != &other) {
        AAnimal::operator=(other);
        delete this->brain;
        if (other.brain)
            this->brain = new Brain(*other.brain);
        else
            this->brain = 0;
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