/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 13:14:11 by hugolefevre       #+#    #+#             */
/*   Updated: 2025/01/20 14:30:08 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"
#include "Animal.hpp"
#include "Dog.hpp"

int main() {
    const int numAnimals = 4;
    Animal* animals[numAnimals];

    for (int i = 0; i < numAnimals / 2; ++i) {
        animals[i] = new Dog();
    }

    for (int i = numAnimals / 2; i < numAnimals; ++i) {
        animals[i] = new Cat();
    }

    std::cout << std::endl;
    std::cout << "---------------------------" << std::endl;
    std::cout << std::endl;

    for (int i = 0; i < numAnimals; ++i) {
        animals[i]->makeSound();
    }

    std::cout << std::endl;
    std::cout << "---------------------------" << std::endl;
    std::cout << std::endl;

    for (int i = 0; i < numAnimals; ++i) {
        delete animals[i];
    }

    return 0;
}