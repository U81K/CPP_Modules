/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 18:12:37 by bgannoun          #+#    #+#             */
/*   Updated: 2023/11/21 12:47:49 by bgannoun         ###   ########.fr       */
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

typedef void (Harl::*funcs) (void);

#endif