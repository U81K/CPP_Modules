/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 10:28:46 by bgannoun          #+#    #+#             */
/*   Updated: 2023/12/05 14:39:27 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	value = 0;
}

Fixed::Fixed(const Fixed&other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		value = other.value;
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return value;
}

void Fixed::setRawBits(int const raw)
{
	value = raw;
}

Fixed::Fixed(const int i)
{
	std::cout << "Int constructor called" << std::endl;
	value = i * (ft_power(2, fractional_bits));
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
	value = std::roundf(f * ft_power(2, fractional_bits));
}

int Fixed::toInt() const
{
    return (value / ft_power(2, fractional_bits));
}

float Fixed::toFloat() const
{
    return ((float)value / ft_power(2, fractional_bits));
}

std::ostream& operator<<(std::ostream &os, const Fixed &classs)
{
	os << classs.toFloat();
	return (os);
}

bool Fixed::operator>(const Fixed &other) const
{
	return (this->value > other.value);
}
bool Fixed::operator<(const Fixed &other) const
{
	return (this->value < other.value);
}
bool Fixed::operator>=(const Fixed &other) const
{
	return (this->value >= other.value);
}
bool Fixed::operator<=(const Fixed &other) const
{
	return (this->value <= other.value);
}
bool Fixed::operator==(const Fixed &other) const
{
	return (this->value == other.value);
}
bool Fixed::operator!=(const Fixed &other) const
{
	return (this->value != other.value);
}
Fixed Fixed::operator*(const Fixed &other) const
{
	return(Fixed(this->toFloat() * other.toFloat()));
}
Fixed Fixed::operator+(const Fixed &other) const
{
	return(Fixed(this->toFloat() + other.toFloat()));
}
Fixed Fixed::operator-(const Fixed &other) const
{
	return(Fixed(this->toFloat() - other.toFloat()));
}
Fixed Fixed::operator/(const Fixed &other) const
{
	return(Fixed(this->toFloat() / other.toFloat()));
}
Fixed &Fixed::operator++()
{
	this->value += 1;
	return (*this);
}
Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	this->value += 1;
	return (tmp);
}
Fixed &Fixed::operator--()
{
	this->value -= 1;
	return (*this);
}
Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	this->value -= 1;
	return (tmp);
}
Fixed& Fixed::min(Fixed &a, Fixed &b)
{
	if (a.toFloat() < b.toFloat())
		return (a);
	else
		return(b);
}
const Fixed& Fixed::min(const Fixed &a, const Fixed&b)
{
	if (a.toFloat() < b.toFloat())
		return (a);
	else
		return(b);
}
Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a.toFloat() > b .toFloat())
		return (a);
	else
		return (b);
}
const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.toFloat() > b .toFloat())
		return (a);
	else
		return (b);
}
