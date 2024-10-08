/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 20:38:12 by bgannoun          #+#    #+#             */
/*   Updated: 2023/12/06 16:45:39 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

static const int fractional_bits = 8;

class Fixed
{
	private:
		int value;
		static const int fractional_bits;
	public:
		Fixed();
		Fixed(const Fixed&other);
		Fixed &operator=(const Fixed &other);
		~Fixed();
		int getRawBits() const;
		void setRawBits(int const raw);
};

#endif