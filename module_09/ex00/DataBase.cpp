/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DataBase.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 19:00:43 by bgannoun          #+#    #+#             */
/*   Updated: 2024/01/30 09:45:37 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DataBase.hpp"

DataBase &DataBase::operator=(const DataBase &other){
	if (this != &other){
		DataFile = other.DataFile;
		data = other.data;
	}
	return (*this);
}

DataBase::DataBase(const DataBase &other){
	*this = other;
}

DataBase::DataBase() : DataFile("data.csv") {
	ReadData();
}

std::map<std::string, double>::iterator DataBase::getIter(std::string date){
	return (data.find(date));
}

bool DataBase::isDateValid(std::string date){
	std::stringstream ss(date);
	
	std::string year;
	std::string month;
	std::string day;
	
	std::getline(ss, year, '-');
	std::getline(ss, month, '-');
	std::getline(ss, day, '-');
	char *p;
	int y = std::strtod(year.c_str(), &p);
	int m = std::strtod(month.c_str(), &p);
	int d = std::strtod(day.c_str(), &p);
	if (y < 0 || m < 0 || d < 0 || m > 12 || d > 31)
		return (true);
	if (m == 4 || m == 6 || m == 9 || m == 11){
		if (d > 30)
			return (true);
	}
	return (false);
}

double DataBase::getDateDays(std::map<std::string, double>::iterator it){
	std::stringstream ss(it->first);
	
	std::string year;
	std::string month;
	std::string day;
	
	std::getline(ss, year, '-');
	std::getline(ss, month, '-');
	std::getline(ss, day, '-');
	char *p;
	int y = std::strtod(year.c_str(), &p);
	int m = std::strtod(month.c_str(), &p);
	int d = std::strtod(day.c_str(), &p);
	return (y * 365 + m * 30 + d);
}

double DataBase::getDateDays(std::string date){
	std::stringstream ss(date);
	
	std::string year;
	std::string month;
	std::string day;
	
	std::getline(ss, year, '-');
	std::getline(ss, month, '-');
	std::getline(ss, day, '-');
	char *p;
	int y = std::strtod(year.c_str(), &p);
	int m = std::strtod(month.c_str(), &p);
	int d = std::strtod(day.c_str(), &p);
	return (y * 365 + m * 30 + d);
}

void DataBase::getCloseDateIter(std::string date,double v){
	std::map<std::string, double>::iterator close;
	double min = 90000;
	double dateD = getDateDays(date);
	for(std::map<std::string, double>::iterator it = data.begin(); it != data.end(); it++){
		if (std::abs(dateD - getDateDays(it)) < min){
			min = std::abs(dateD - getDateDays(it));
			close = it;
		}
	}
	std::cout << date << " => " << v << " = " << v * close->second << std::endl;
}

void DataBase::getOutput(std::string date, double v){
	std::map<std::string, double>::iterator it = getIter(date);
	if (v == -42 || isDateValid(date))
		std::cout << "Error: bad input => " << date << std::endl;
	else if (v < 0)
		std::cout << "Error: not a positive number." << std::endl;
	else if (v > 1000)
		std::cout << "Error: too large a number." << std::endl;
	else if (it != data.end())
		std::cout << it->first << " => " << v << " = " << v * it->second << std::endl;
	else if (it == data.end()){
		getCloseDateIter(date, v);
	}
}

void DataBase::ReadData(){
	std::ifstream infile(DataFile);
	if (!infile.is_open()){
		std::cerr << "Error opening the file." << std::endl;
		return;
	}
	std::string line;
	std::getline(infile, line);
	data.clear();
	while (std::getline(infile, line)){
		std::string date = line.substr(0, line.find(","));
		std::string value = line.substr(line.find(",") + 1);
		double v = std::strtod(line.substr(line.find(",") + 1).c_str(), NULL);
		data.insert(std::make_pair(date, v));
	}
	infile.close();
}

void DataBase::PrintData(){
	for(std::map<std::string, double>::iterator it = data.begin(); it != data.end(); it++){
		std::cout << "data " << it->first << " value " << it->second << std::endl;
	}
}

DataBase::~DataBase() {}

std::string &DataBase::GetFileName(){
	return (DataFile);
}
void DataBase::SetFileName(std::string newName){
	DataFile = newName; 
}