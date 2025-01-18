/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 18:18:05 by hugolefevre       #+#    #+#             */
/*   Updated: 2025/01/18 14:56:29 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() : ideas(new std::string[100]), size(100) {
    std::cout << "Brain constructed" << std::endl;
}

Brain::Brain(const Brain &other) : ideas(0), size(other.size) {
    if (other.ideas) {
        ideas = new std::string[size];
        for (size_t i = 0; i < size; ++i) {
            ideas[i] = other.ideas[i];
        } 
    } else {
        std::cerr << "Error: Null pointer in Brain copy constructor" << std::endl;
    }
    std::cout << "Brain copy constructed" << std::endl;
}

Brain &Brain::operator=(const Brain &other) {
    std::cout << "Brain copy assignment operator called" << std::endl;
    if (this != &other) {
        delete[] ideas;
        size = other.size;
        ideas = new std::string[size];
        for (size_t i = 0; i < size; ++i) {
            ideas[i] = other.ideas[i];
        }
    }
    return *this;
}

Brain::~Brain() {
    delete[] ideas;
    std::cout << "Brain destructed" << std::endl;
}

std::string Brain::getIdea(int index) const {
    return ideas[index];
}

void Brain::setIdea(int index, const std::string &idea) {
    if (index < 0 || index >= 100) {
        std::cerr << "Invalid index for ideas: " << index << std::endl;
        return ;
    }
    ideas[index] = idea;
}