/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DataBase.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 19:00:08 by bgannoun          #+#    #+#             */
/*   Updated: 2024/01/30 09:19:34 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DataBase_HPP
#define DataBase_HPP

#include <iostream>
#include <map>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <cmath>


class DataBase{
		private:
	std::string DataFile;
	std::map<std::string, double> data;
		public:
	DataBase();
	~DataBase();
	DataBase(const DataBase &other);
	DataBase &operator=(const DataBase &other);
	std::map<std::string, double>::iterator getIter(std::string date);
	bool isDateValid(std::string date);
	double getDateDays(std::map<std::string, double>::iterator it);
	double getDateDays(std::string date);
	void getCloseDateIter(std::string date,double v);
	void getOutput(std::string date, double v);
	void ReadData();
	void PrintData();
	std::string &GetFileName();
	void SetFileName(std::string newName);
};

#endif