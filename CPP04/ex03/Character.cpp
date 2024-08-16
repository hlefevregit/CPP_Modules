/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugolefevre <hugolefevre@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 20:52:05 by hugolefevre       #+#    #+#             */
/*   Updated: 2024/08/16 20:53:35 by hugolefevre      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name) : _name(name) {
    for (int i = 0; i < 4; i++) {
        _inventory[i] = nullptr;
    }
    std::cout << "Character " << _name << " created." << std::endl;
}

Character::Character(Character const & other) : _name(other._name) {
    for (int i = 0; i < 4; i++) {
        if (other._inventory[i])
            _inventory[i] = other._inventory[i]->clone();
        else
            _inventory[i] = nullptr;
    }
    std::cout << "Character " << _name << " copied." << std::endl;
}

Character & Character::operator=(Character const & other) {
    if (this != &other) {
        _name = other._name;
        for (int i = 0; i < 4; i++) {
            if (_inventory[i])
                delete _inventory[i];
            if (other._inventory[i])
                _inventory[i] = other._inventory[i]->clone();
            else
                _inventory[i] = nullptr;
        }
    }
    std::cout << "Character " << _name << " assigned." << std::endl;
    return *this;
}

Character::~Character() {
    for (int i = 0; i < 4; i++) {
        if (_inventory[i])
            delete _inventory[i];
    }
    std::cout << "Character " << _name << " destroyed." << std::endl;
}

std::string const & Character::getName() const {
    return _name;
}

void Character::equip(AMateria* m) {
    if (!m) return;
    for (int i = 0; i < 4; i++) {
        if (_inventory[i] == nullptr) {
            _inventory[i] = m;
            std::cout << "Equipped " << m->getType() << " to " << _name << " at slot " << i << "." << std::endl;
            return;
        }
    }
    std::cout << _name << "'s inventory is full. Cannot equip " << m->getType() << "." << std::endl;
}

void Character::unequip(int idx) {
    if (idx >= 0 && idx < 4 && _inventory[idx]) {
        _inventory[idx] = nullptr;
        std::cout << _name << " unequipped materia at slot " << idx << "." << std::endl;
    } else {
        std::cout << "Cannot unequip materia at slot " << idx << " for " << _name << "." << std::endl;
    }
}

void Character::use(int idx, ICharacter& target) {
    if (idx >= 0 && idx < 4 && _inventory[idx]) {
        _inventory[idx]->use(target);
    } else {
        std::cout << "Cannot use materia at slot " << idx << " for " << _name << "." << std::endl;
    }
}