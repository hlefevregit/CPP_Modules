/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 18:18:05 by hugolefevre       #+#    #+#             */
/*   Updated: 2025/01/20 14:44:43 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain constructed" << std::endl;
}

Brain::Brain(const Brain &other) {
    for (int i = 0; i < 100; i++) {
        ideas[i] = other.ideas[i];
    }
    std::cout << "Brain copy constructed" << std::endl;
}

Brain &Brain::operator=(const Brain &other) {
    if (this != &other) {
        for (int i = 0; i < 100; i++) {
            ideas[i] = other.ideas[i];
        }
    }
    std::cout << "Brain copy assignment operator called" << std::endl;
    return *this;
}

Brain::~Brain() {
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