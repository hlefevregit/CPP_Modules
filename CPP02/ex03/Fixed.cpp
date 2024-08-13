/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 14:36:53 by hulefevr          #+#    #+#             */
/*   Updated: 2024/08/13 16:49:37 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/**************************************COPLIEN*********************************/
Fixed::Fixed( void )
{
	///std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed( const Fixed &src )
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::Fixed( const int n )
{
	//std::cout << "Int constructor called" << std::endl;
	this->_value = n<<this->_fractValue;
	return ;
}

Fixed::Fixed( const float f )
{
	//std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(f * (1<<this->_fractValue));
	return ;
}

Fixed::~Fixed( void )
{
	//std::cout << "Destructor called" << std::endl;
	return ;
}

/*****************************************************************************/

int	Fixed::getRawBits( void ) const {
	return (this->_value);
}

void	Fixed::setRawBits( int const raw ) {
	this->_value = raw;
	return ;
}

float	Fixed::toFloat( void ) const {
	return ((float) this->_value / (1<<this->_fractValue));
}

int	Fixed::toInt( void ) const {
	return (this->_value >> this->_fractValue);
}

/************************************OPERATORS******************************/

Fixed	&Fixed::operator=( const Fixed &rhs )
{
	//std::cout << "Copy assignement operator called" << std::endl;
	this->_value = rhs.getRawBits();
	return (*this);
}

std::ostream	&operator<<( std::ostream &o, const Fixed &i)
{
	o << i.toFloat();
	return (o);
}

/*-------------------------------*/

bool	Fixed::operator>( const Fixed &other) const {
	return (this->_value > other._value);
}

bool	Fixed::operator>=( const Fixed &other) const {
	return (this->_value >= other._value);
}

bool	Fixed::operator<( const Fixed &other) const {
	return (this->_value < other._value);
}

bool	Fixed::operator<=( const Fixed &other) const {
	return (this->_value <= other._value);
}

bool	Fixed::operator==( const Fixed &other) const {
	return (this->_value == other._value);
}

bool	Fixed::operator!=( const Fixed &other) const {
	return (this->_value != other._value);
}

/*--------------------------*/

Fixed	Fixed::operator+( const Fixed &other ) const {
	return (this->toFloat() + other.toFloat());
}

Fixed	Fixed::operator-( const Fixed &other ) const {
	return (this->toFloat() - other.toFloat());
}

Fixed	Fixed::operator*( const Fixed &other ) const {
	return (this->toFloat() * other.toFloat());
}

Fixed	Fixed::operator/( const Fixed &other ) const {
	return (this->toFloat() / other.toFloat());
}

/*---------------------------*/

Fixed	Fixed::operator++( int ) {
	Fixed	temp = *this;
	++this->_value;
	return (temp);
}

Fixed	Fixed::operator--( int ) {
	Fixed	temp = *this;
	--this->_value;
	return (temp);
}

Fixed	&Fixed::operator++( void ) {
	++this->_value;
	return *this;
}

Fixed	&Fixed::operator--( void ) {
	--this->_value;
	return *this;
}

/***************************************************************************/

Fixed	&Fixed::min( Fixed &a, Fixed &b ) {
	return ((a._value < b._value) ? a : b);
}

const Fixed	&Fixed::min( const Fixed &a, const Fixed &b ) {
	return ((a._value < b._value) ? a : b);
}

Fixed	&Fixed::max( Fixed &a, Fixed &b ) {
	return ((a._value > b._value) ? a : b);
}

const Fixed	&Fixed::max( const Fixed &a, const Fixed &b ) {
	return ((a._value > b._value) ? a : b);
}