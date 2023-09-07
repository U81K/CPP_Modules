/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 06:45:44 by bgannoun          #+#    #+#             */
/*   Updated: 2023/09/03 08:10:27 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	int i;

	i = 0;
	Zombie *Horde = new Zombie[N];
	while (i < N)
		Horde[i++].name = name;
	return (Horde);
}
