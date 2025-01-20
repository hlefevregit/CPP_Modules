/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 13:14:11 by hugolefevre       #+#    #+#             */
/*   Updated: 2025/01/20 13:49:17 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    WrongAnimal* animal = new WrongAnimal();
    WrongAnimal* cat = new WrongCat();

    std::cout << std::endl;
    std::cout << "---------------------------" << std::endl;
    std::cout << std::endl;
    
    animal->makeSound();
    cat->makeSound();

    std::cout << std::endl;
    std::cout << "---------------------------" << std::endl;
    std::cout << std::endl;

    delete animal;
    delete cat;

    std::cout << std::endl;
    std::cout << "---------------------------" << std::endl;
    std::cout << std::endl;
    
    
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    std::cout << std::endl;
    std::cout << "---------------------------" << std::endl;
    std::cout << std::endl;

    std::cout << j->getType() << " // is supposed to be a dog " << std::endl;
    std::cout << i->getType() << " // is supposed to be a cat " << std::endl;
    i->makeSound(); 
    j->makeSound();
    meta->makeSound();
    
    std::cout << std::endl;
    std::cout << "---------------------------" << std::endl;
    std::cout << std::endl;
    
    delete meta;
    delete j;
    delete i;

    return 0;
}