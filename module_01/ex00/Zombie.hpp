/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 03:51:51 by bgannoun          #+#    #+#             */
/*   Updated: 2023/09/03 04:46:49 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
		private:
	std::string name;
		public:
	void announce(void);
	friend Zombie* newZombie(std::string name);
	friend void randomChump(std::string name);
	~Zombie();
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif