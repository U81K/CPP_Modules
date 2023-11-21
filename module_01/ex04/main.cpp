/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 10:23:20 by bgannoun          #+#    #+#             */
/*   Updated: 2023/11/20 17:36:13 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int ReadWrite::compare()
{
	if (s1.compare(s2) == 0)
		return (0);
	return (1);
}
	
void	ReadWrite::redirection()
{
	std::ifstream in(infile);
	if (!in)
	{
		std::cerr << "Error opening the file." << std::endl;
		exit(1);
	}
	std::ofstream out(outfile);
	writing(in, out);
}

ReadWrite::ReadWrite(char *in, char *av2, char *av3)
{
	infile = in;
	outfile.assign(infile);
	outfile.append(".replace");
	s1 = av2;
	s2 = av3;
}

void ReadWrite::writing(std::ifstream &in, std::ofstream &out)
{
	std::string line;
	int is_eq =  compare();

	if (is_eq != 0)
	{
		while (getline(in, line))
		{
			std::size_t pos = 0;
			while ((pos = line.find(s1, pos)) != std::string::npos)
				line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
			out << line << std::endl;
		}
	}
	else
	{
		while (getline(in, line))
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
