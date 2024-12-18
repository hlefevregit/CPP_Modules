/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 13:14:11 by hugolefevre       #+#    #+#             */
/*   Updated: 2024/12/18 12:56:48 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>
#include <vector>

int main() {
    std::cout << "=== Création des animaux ===" << std::endl;

    const int animalCount = 6;
    AAnimal* animals[animalCount];

    // Initialisation du tableau d'animaux
    for (int i = 0; i < animalCount / 2; ++i) {
        animals[i] = new Dog();
        std::cout << "Dog " << i << " created." << std::endl;
    }
    for (int i = animalCount / 2; i < animalCount; ++i) {
        animals[i] = new Cat();
        std::cout << "Cat " << i << " created." << std::endl;
    }

    std::cout << "\n=== Sons des animaux ===" << std::endl;
    for (int i = 0; i < animalCount; ++i) {
        if (animals[i]) {
            animals[i]->makeSound();
        } else {
            std::cerr << "Error: Null pointer in animals array at index " << i << std::endl;
        }
    }

    std::cout << "\n=== Test de la copie profonde ===" << std::endl;
    Dog originalDog;
    if (originalDog.getBrain() == 0) {
        std::cerr << "Error: Dog's Brain is null!" << std::endl;
    } else {
        originalDog.getBrain()->setIdea(0, "Manger un os");
    }

    Dog copiedDog(originalDog); // Test du constructeur par copie
    if (copiedDog.getBrain() == 0) {
        std::cerr << "Error: Copied Dog's Brain is null!" << std::endl;
    } else {
        std::cout << "Copied Dog's Brain Idea 0: " << copiedDog.getBrain()->getIdea(0) << std::endl;
    }

    std::cout << "\n=== Destruction des animaux ===" << std::endl;

    // Destruction du tableau d'animaux
    for (int i = 0; i < animalCount; ++i) {
        if (animals[i]) {
            delete animals[i];
            animals[i] = 0; // Évite les accès à des pointeurs pendants
        } else {
            std::cerr << "Error: Null pointer in animals array at index " << i << " during destruction." << std::endl;
        }
    }

    std::cout << "=== Fin du programme ===" << std::endl;
    return 0;
}