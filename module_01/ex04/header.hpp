/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 18:07:01 by bgannoun          #+#    #+#             */
/*   Updated: 2023/11/20 15:06:38 by bgannoun         ###   ########.fr       */
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
	ReadWrite(char *in, char *av2, char *av3);
	void writing(std::ifstream &in, std::ofstream &out);
	int compare();
	void	redirection();
};

#endif