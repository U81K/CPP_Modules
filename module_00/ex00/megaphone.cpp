/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 00:44:46 by bgannoun          #+#    #+#             */
/*   Updated: 2023/10/11 10:10:54 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	std::string arg;
	int 		i;
	int 		j;
	
	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}
	i = 1;
	while (i < ac)
	{
		j = 0;
		arg = av[i];
		while (arg[j])
		{
			arg[j] = std::toupper(arg[j]);
			std::cout << arg[j];
			j++;
		}
		i++;
	}
	std::cout << std::endl;
	return (0);
}
