/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testing.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 11:39:04 by bgannoun          #+#    #+#             */
/*   Updated: 2024/01/18 19:51:10 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "string.h"

using namespace std;

std::string search_for_IMSI(std::string ret, std::string f_list[], int f_listC){
	std::string IMSI;
	for(int i = 0; i < f_listC; i++){
		if (f_list[i].find(ret) != std::string::npos){
			IMSI = f_list[i].substr(f_list[i].find(','));
		}
	}
	return (IMSI);
}

std::string covert(std::string ele, std::string f_list[], int f_listC){
	std::string ret = ele.substr(ele.find('+'));
	std::string IMSI = search_for_IMSI(ret, f_list, f_listC);
	if (IMSI.size() == 0)
		return ("");
	std::string city = ele.substr(0, ele.find(','));
	ret = ret + IMSI + "," + city;
	return (ret);
}

int main() {
	int f_listC = 0;
	int s_listC = 0;
	std::cin >> f_listC;
	std::string f_list[f_listC];
	for(int i = 0; i < f_listC; i++){
		std::cin >> f_list[i];
	}
	std::cin >> s_listC;
	std::string s_list[s_listC];
	for(int i = 0; i < s_listC; i++){
		std::cin >> s_list[i];
	}
	for(int i = 0; i < s_listC; i++){
		std::string ret = covert(s_list[i], f_list, f_listC);
		if (ret.size()){
			std::cout << ret << std::endl;
		}
	}
    return 0;
}