/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 14:36:18 by hulefevr          #+#    #+#             */
/*   Updated: 2024/08/13 15:51:01 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <string>
# include <iostream>
# include <cmath>

class Fixed
{
private:
	
	int	_value;
	static const int	_fractValue = 8;
	
public:

/*------------------- COPLIEN -------------*/
	Fixed( void );
	Fixed( const Fixed &src );
	Fixed( const int n );
	Fixed( const float f);
	~Fixed( void );
	Fixed	&operator=(const Fixed &rhs);

/*-----------------------------------------*/

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );	
	float	toFloat( void ) const;
	int		toInt( void ) const;

};

std::ostream &operator<<( std::ostream &o, Fixed const &i );

#endif