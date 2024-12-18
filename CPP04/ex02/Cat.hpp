/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 17:44:27 by hugolefevre       #+#    #+#             */
/*   Updated: 2024/12/18 12:34:38 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"


class Cat : public AAnimal {
private:
    Brain   *brain;
public:
    Cat(); 
    virtual ~Cat();
    Cat(const Cat &other);
    Cat &operator=(const Cat &other);

    virtual void makeSound() const;
};

#endif