/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 14:36:18 by hulefevr          #+#    #+#             */
/*   Updated: 2024/08/13 14:52:48 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <string>
# include <iostream>

class Fixed
{
private:
	
	int	_value;
	static const int	_fractValue;
	
public:

/*--------------------COPLIEN -------------*/
	Fixed( void );
	Fixed( const Fixed &src );
	~Fixed( void );
	Fixed	&operator=(const Fixed &rhs);

/*-----------------------------------------*/

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );	
	
};


#endif