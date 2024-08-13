/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 16:02:44 by hulefevr          #+#    #+#             */
/*   Updated: 2024/08/13 16:22:33 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ) : _x(0), _y(0) {
	std::cout << "Default constructor called" << std::endl;
}

Point::Point( const Point &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
	return ;
}

Point::Point( const float x, const float y ) {
	std::cout << "Constructor with parameters called" << std::endl;
}

Point::~Point( void ) {
	std::cout << "Destructor called" << std::endl;
}

Point	&Point::operator=( const Point &other ) {
	return (*this);
}

Fixed	Point::getX( void ) const {
	return _x;
}

Fixed	Point::getY( void ) const {
	return _y;
}
