/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 09:29:28 by bgannoun          #+#    #+#             */
/*   Updated: 2024/01/30 09:36:37 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other){
	*this = other;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other){
	if (this != &other){
		_InputFileName = other._InputFileName;
	}
	return (*this);
}

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(std::string FileName) : DataBase(), _InputFileName(FileName){
	ReadInput();
}

void BitcoinExchange::ReadInput(){
	std::ifstream infile(_InputFileName);
	if (!infile.is_open()){
		std::cerr << "Error opening the file." << std::endl;
		return;
	}
	std::string line;
	std::getline(infile, line);
	while (std::getline(infile, line)){
		std::istringstream iss(line);
		std::string date;
		char pipe;
		double value;
		iss >> date >> pipe >> value;
		if (iss.fail() || pipe != '|'){
			value = -42;
		}
		getOutput(date, value);
	}
	infile.close();
}

void BitcoinExchange::set_InputFileName(std::string in){
	_InputFileName = in;
}
std::string BitcoinExchange::Get_InputFileName(){
	return (_InputFileName);
}
BitcoinExchange::~BitcoinExchange() {}