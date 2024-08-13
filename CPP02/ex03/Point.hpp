/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 16:03:02 by hulefevr          #+#    #+#             */
/*   Updated: 2024/08/13 16:41:04 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"
# include <iostream>

class Point
{


private:
	
	const Fixed	_x;
	const Fixed	_y;
	
public:

	Point( void );
	Point( const float x, const float y);
	Point( const Point &other );
	~Point();
	Point	&operator=( const Point &other);

	Fixed	getX( void ) const;
	Fixed	getY( void ) const;
	
};

bool	bsp( Point const a, Point const b, Point const c, Point const point);

#endif