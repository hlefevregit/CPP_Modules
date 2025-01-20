/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 20:49:46 by hugolefevre       #+#    #+#             */
/*   Updated: 2025/01/20 14:52:43 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();

	std::cout << std::endl;
    std::cout << "---------------------------" << std::endl;
    std::cout << std::endl;

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	std::cout << std::endl;
    std::cout << "---------------------------" << std::endl;
    std::cout << std::endl;

	AMateria* tmp;

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	std::cout << std::endl;
    std::cout << "---------------------------" << std::endl;
    std::cout << std::endl;

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << std::endl;
    std::cout << "---------------------------" << std::endl;
    std::cout << std::endl;

	delete bob;
	delete me;
	delete src;
	return 0;
}