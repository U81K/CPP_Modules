/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 10:23:20 by bgannoun          #+#    #+#             */
/*   Updated: 2023/09/18 20:04:02 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

void ReadWrite::writing(std::ifstream &in, std::ofstream &out)
{
	std::string line;
	while (getline(in, line))
	{
		int pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
		}
		out << line << std::endl;
	}
	
}

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "wrong number of args\n";
		return (1);
	}
	ReadWrite op = ReadWrite(av[1], av[2], av[3]);
	op.redirection();
	return (0);
}
