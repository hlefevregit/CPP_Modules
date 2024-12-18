/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 20:54:52 by hugolefevre       #+#    #+#             */
/*   Updated: 2024/12/18 12:15:46 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource() {
    for (int i = 0; i < 4; i++) {
        _materias[i] = 0;
    }
    std::cout << "MateriaSource created." << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &other) {
    for (int i = 0; i < 4; i++) {
        if (other._materias[i])
            _materias[i] = other._materias[i]->clone();
        else
            _materias[i] = 0;
    }
    std::cout << "MateriaSource copied." << std::endl;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &other) {
    if (this != &other) {
        for (int i = 0; i < 4; i++) {
            if (_materias[i])
                delete _materias[i];
            if (other._materias[i])
                _materias[i] = other._materias[i]->clone();
            else
                _materias[i] = 0;
        }
    }
    std::cout << "MateriaSource assigned." << std::endl;
    return *this;
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < 4; i++) {
        if (_materias[i])
            delete _materias[i];
    }
    std::cout << "MateriaSource destroyed." << std::endl;
}

void MateriaSource::learnMateria(AMateria *m) {
    if (!m) return;
    for (int i = 0; i < 4; i++) {
        if (_materias[i] == 0) {
            _materias[i] = m;
            std::cout << "Materia " << m->getType() << " learned." << std::endl;
            return;
        }
    }
    std::cout << "MateriaSource is full. Cannot learn " << m->getType() << "." << std::endl;
}

AMateria *MateriaSource::createMateria(std::string const &type) {
    for (int i = 0; i < 4; i++) {
        if (_materias[i] && _materias[i]->getType() == type) {
            std::cout << "Creating Materia of type " << type << "." << std::endl;
            return _materias[i]->clone();
        }
    }
    std::cout << "Materia of type " << type << " not found." << std::endl;
    return 0;
}