/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 13:14:11 by hugolefevre       #+#    #+#             */
/*   Updated: 2025/01/20 14:50:12 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>
#include <vector>

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define BOLD "\033[1m"

void run_test()
{
    std::cout << BOLD GREEN "=== Test 1: Default constructor and destructor ===" RESET << std::endl;
    {
        Dog dog1;
        dog1.getBrain()->setIdea(0, "Chase the ball");
        std::cout << CYAN "Dog1's first idea: " << RESET << dog1.getBrain()->getIdea(0) << std::endl;
    }
    std::cout << BOLD GREEN "Test 1 completed" RESET << std::endl;

    std::cout << "\n" BOLD YELLOW "=== Test 2: Copy constructor ===" RESET << std::endl;
    {
        Dog dog1;
        dog1.getBrain()->setIdea(0, "Chew the bone");
        std::cout << CYAN "Dog1's first idea: " << RESET << dog1.getBrain()->getIdea(0) << std::endl;

        Dog dog2(dog1);
        std::cout << CYAN "Dog2's first idea after copy: " << RESET << dog2.getBrain()->getIdea(0) << std::endl;

        dog2.getBrain()->setIdea(0, "Fetch the stick");
        std::cout << CYAN "Dog1's first idea after Dog2 modification: " << RESET << dog1.getBrain()->getIdea(0) << std::endl;
        std::cout << CYAN "Dog2's first idea after modification: " << RESET << dog2.getBrain()->getIdea(0) << std::endl;
    }
    std::cout << BOLD YELLOW "Test 2 completed" RESET << std::endl;

    std::cout << "\n" BOLD MAGENTA "=== Test 3: Assignment operator ===" RESET << std::endl;
    {
        Dog dog1;
        dog1.getBrain()->setIdea(0, "Guard the house");
        std::cout << CYAN "Dog1's first idea: " << RESET << dog1.getBrain()->getIdea(0) << std::endl;

        Dog dog3;
        dog3 = dog1;
        std::cout << CYAN "Dog3's first idea after assignment: " << RESET << dog3.getBrain()->getIdea(0) << std::endl;

        dog3.getBrain()->setIdea(0, "Bark at strangers");
        std::cout << CYAN "Dog1's first idea after Dog3 modification: " << RESET << dog1.getBrain()->getIdea(0) << std::endl;
        std::cout << CYAN "Dog3's first idea after modification: " << RESET << dog3.getBrain()->getIdea(0) << std::endl;
    }
    std::cout << BOLD MAGENTA "Test 3 completed" RESET << std::endl;

    std::cout << "\n" BOLD BLUE "=== Test 4: Array of animals ===" RESET << std::endl;
    {
        AAnimal* animals[4];
        for (int i = 0; i < 2; ++i) {
            animals[i] = new Dog();
        }
        for (int i = 2; i < 4; ++i) {
            animals[i] = new Cat();
        }

        dynamic_cast<Dog*>(animals[0])->getBrain()->setIdea(0, "Dig a hole");
        std::cout << CYAN "Animal[0]'s first idea: " RESET
                  << dynamic_cast<Dog*>(animals[0])->getBrain()->getIdea(0) << std::endl;

        for (int i = 0; i < 4; ++i) {
            delete animals[i];
        }
    }
    std::cout << BOLD BLUE "Test 4 completed" RESET << std::endl;

    std::cout << "\n" BOLD RED "=== Test 5: Edge cases ===" RESET << std::endl;
    {
        Dog* dogPtr = new Dog();
        dogPtr->getBrain()->setIdea(99, "Sleep under the sun");
        std::cout << CYAN "Dog's last idea: " RESET << dogPtr->getBrain()->getIdea(99) << std::endl;

        Dog* dogCopy = new Dog(*dogPtr);
        delete dogPtr;
        std::cout << CYAN "DogCopy's last idea after deleting Dog: " RESET
                  << dogCopy->getBrain()->getIdea(99) << std::endl;

        delete dogCopy;
    }
    std::cout << BOLD RED "Test 5 completed" RESET << std::endl;
}

int main() {
    
    std::cout << "=== Création des animaux ===" << std::endl;
    std::cout << std::endl;

    const int animalCount = 6;
    AAnimal* animals[animalCount];

    for (int i = 0; i < animalCount / 2; ++i) {
        animals[i] = new Dog();
        std::cout << "Dog " << i << " created." << std::endl;
    }
    for (int i = animalCount / 2; i < animalCount; ++i) {
        animals[i] = new Cat();
        std::cout << "Cat " << i << " created." << std::endl;
    }
    std::cout << std::endl;
    std::cout << "\n=== Sons des animaux ===" << std::endl;
    std::cout << std::endl;
    for (int i = 0; i < animalCount; ++i) {
        if (animals[i]) {
            animals[i]->makeSound();
        } else {
            std::cerr << "Error: Null pointer in animals array at index " << i << std::endl;
        }
    }
    std::cout << std::endl;
    std::cout << "\n=== Test de la copie profonde ===" << std::endl;
    std::cout << std::endl;
    Dog originalDog;
    if (originalDog.getBrain() == 0) {
        std::cerr << "Error: Dog's Brain is null!" << std::endl;
    } else {
        originalDog.getBrain()->setIdea(0, "Manger un os");
    }

    Dog copiedDog(originalDog);
    if (copiedDog.getBrain() == 0) {
        std::cerr << "Error: Copied Dog's Brain is null!" << std::endl;
    } else {
        std::cout << "Copied Dog's Brain Idea 0: " << copiedDog.getBrain()->getIdea(0) << std::endl;
    }
    std::cout << std::endl;
    std::cout << "\n=== Destruction des animaux ===" << std::endl;
    std::cout << std::endl;
    for (int i = 0; i < animalCount; ++i) {
        if (animals[i]) {
            delete animals[i];
            animals[i] = 0;
        } else {
            std::cerr << "Error: Null pointer in animals array at index " << i << " during destruction." << std::endl;
        }
    }
    std::cout << std::endl;
    std::cout << "=== Fin du programme ===" << std::endl;
    std::cout << std::endl;

    std::cout << "NEW TEST" << std::endl;
    
    run_test();
    
    return 0;
}