/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugolefevre <hugolefevre@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 13:15:43 by hugolefevre       #+#    #+#             */
/*   Updated: 2024/08/16 17:51:27 by hugolefevre      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
public:
    Dog(); // Constructeur par défaut
    virtual ~Dog(); // Destructeur
    Dog(const Dog &other); // Constructeur de recopie
    Dog &operator=(const Dog &other); // Opérateur d'affectation

    void makeSound() const; // Redéfinition de makeSound()
};

#endif