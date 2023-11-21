/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 06:45:07 by bgannoun          #+#    #+#             */
/*   Updated: 2023/11/18 08:21:31 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "zombieHorde.hpp"

int main(void)
{
	int i = 0;
	int N = 3;
	Zombie *Horde = zombieHorde(N, "zz");
	while (i < N)
		Horde[i++].announce();
	delete [] Horde;
	return (0);
}
