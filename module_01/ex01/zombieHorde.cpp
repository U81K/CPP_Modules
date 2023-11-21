/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 08:10:13 by bgannoun          #+#    #+#             */
/*   Updated: 2023/11/18 08:14:12 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombieHorde.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	int i;

	i = 0;
	Zombie *Horde = new Zombie[N];
	while (i < N)
	{
		Horde[i].set_name(name);
		i++;
	}
	return (Horde);
}
