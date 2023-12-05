/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 21:03:38 by bgannoun          #+#    #+#             */
/*   Updated: 2023/12/05 10:26:46 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int value;
		static const int fractional_bits = 8;
	public:
		Fixed();
		Fixed(const int i);
		Fixed(const float f);
		int toInt() const;
		float toFloat() const;
		Fixed(const Fixed&other);
		Fixed &operator=(const Fixed &other);
		~Fixed();
		int getRawBits() const;
		void setRawBits(int const raw);
};

std::ostream& operator<<(std::ostream& os, const Fixed& classs);

int ft_power(int base, int exp);
#endif