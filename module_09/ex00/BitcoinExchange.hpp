/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 16:46:04 by bgannoun          #+#    #+#             */
/*   Updated: 2024/01/30 09:35:50 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BitcoinExchange_HPP
#define BitcoinExchange_HPP

#include "DataBase.hpp"
#include <fstream>
#include <sstream>
#include <unordered_map>

class BitcoinExchange : public DataBase{
		private:
	std::string _InputFileName;
	BitcoinExchange();
		public:
	virtual ~BitcoinExchange();
	BitcoinExchange(const BitcoinExchange &other);
	BitcoinExchange &operator=(const BitcoinExchange &other);
	BitcoinExchange(std::string FileName);
	void ReadInput();
	void set_InputFileName(std::string in);
	std::string Get_InputFileName();
};

#endif