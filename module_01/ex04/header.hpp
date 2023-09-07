/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 18:07:01 by bgannoun          #+#    #+#             */
/*   Updated: 2023/09/07 18:09:19 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_HPP
#define HEADER_HPP

#include <iostream>
#include <fstream>

class	ReadWrite
{
		private:
	std::string infile;
	std::string	outfile;
	std::string s1;
	std::string s2;
		public:
	ReadWrite(char *in, char *av2, char *av3)
	{
		infile = in;
		outfile.assign(infile);
		outfile.append(".replace");
		s1 = av2;
		s2 = av3;
	}
	void writing(std::ifstream &in, std::ofstream &out);
	void	redirection()
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
	void	printing()
	{
		std::cout << infile << std::endl << outfile << std::endl;
		std::cout << s1 << std::endl << s2 << std::endl;
	}
};

#endif