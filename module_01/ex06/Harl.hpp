/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 19:42:53 by bgannoun          #+#    #+#             */
/*   Updated: 2023/09/08 09:23:29 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl
{
		private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
		public:
	void complain(std::string level);
};

typedef void (Harl::*funcs) (void); //declaration of the pointer

#endif