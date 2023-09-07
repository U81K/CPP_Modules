/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 06:45:20 by bgannoun          #+#    #+#             */
/*   Updated: 2023/09/03 08:11:01 by bgannoun         ###   ########.fr       */
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
	void announce(void);
	friend Zombie* zombieHorde(int N, std::string name);
	~Zombie();
};

Zombie* zombieHorde(int N, std::string name);

#endif