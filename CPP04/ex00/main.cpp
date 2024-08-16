/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugolefevre <hugolefevre@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 13:14:11 by hugolefevre       #+#    #+#             */
/*   Updated: 2024/08/16 18:05:36 by hugolefevre      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    WrongAnimal* animal = new WrongAnimal();
    WrongAnimal* cat = new WrongCat();

    animal->makeSound();
    cat->makeSound();

    delete animal;
    delete cat;

    return 0;
}