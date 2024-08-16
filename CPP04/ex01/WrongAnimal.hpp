/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugolefevre <hugolefevre@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 18:01:27 by hugolefevre       #+#    #+#             */
/*   Updated: 2024/08/16 18:02:06 by hugolefevre      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal {
protected:
    std::string type;

public:
    WrongAnimal(); 
    ~WrongAnimal();
    WrongAnimal(const WrongAnimal &other);
    WrongAnimal  &operator=(const WrongAnimal &other);

    void makeSound() const;
    std::string getType() const;
};

#endif