/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 06:45:20 by bgannoun          #+#    #+#             */
/*   Updated: 2023/11/18 08:05:33 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIES_HPP
#define ZOMBIES_HPP

#include <iostream>

class Zombie
{
		private:
	std::string name;
		public:
	Zombie();
	void set_name(std::string z_name);
	Zombie(std::string z_name);
	~Zombie();
	void announce(void);
};

#endif