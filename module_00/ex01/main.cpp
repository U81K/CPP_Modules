/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 01:36:05 by bgannoun          #+#    #+#             */
/*   Updated: 2023/08/31 08:44:21 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::get_input(std::string &to_fill, std::string qst)
{
	std::cout << qst;
	while (to_fill.empty())
	{
		std::getline(std::cin, to_fill);
		if (to_fill.empty())
			std::cout << "invalid input\n" << qst;
	}
}

void PhoneBook::set_contact(int i)
{
	get_input(contacts[i].first_name, "enter the first name : ");
	get_input(contacts[i].last_name, "enter the last name : ");
	get_input(contacts[i].nickname, "enter the nickname : ");
	get_input(contacts[i].number, "enter the phone number : ");
	get_input(contacts[i].darkest_secret, "enter the darkest secret : ");
	std::cout << "contact created" << std::endl;
	contacts_count++;
	return;
}

int get_index()
{
	int i;

	std::cout << "enter the contact index : ";
	while (1)
	{
		std::cin >> i;
		// if (std::cin.good() && i >= 0 && i <= 7) // the infin loop
		if (i >= 0 && i <= 7)
		{
			std::cin.clear();
			return (i);
		}
		else
		{
			std::cout << "invalid input" << std::endl << "enter the contact index : ";
			std::cin.clear();
		}
	}
	return (i);
}

void PhoneBook::print_cont()
{
	int i;
	i = get_index();
	if (i >= contacts_count)
	{
		std::cout << "not found" << std::endl;
		return;
	}
	std::cout << "---contact information---" << std::endl;
	if (contacts[i].first_name.empty() == 0)
		std::cout <<  "first name     : " << contacts[i].first_name << std::endl;
	if (contacts[i].last_name.empty() == 0)
		std::cout <<  "last name      : " << contacts[i].last_name << std::endl;
	if (contacts[i].nickname.empty() == 0)
		std::cout <<  "nickname       : " << contacts[i].nickname << std::endl;
	if (contacts[i].number.empty() == 0)
		std::cout <<  "phone number   : " << contacts[i].number << std::endl;
	if (contacts[i].darkest_secret.empty() == 0)
		std::cout <<  "darkest secret : " << contacts[i].darkest_secret << std::endl;
}

std::string	aligne(std::string str)
{
	std::string res;
	res.resize(10);
	if (str.size() < 10)
	{
		int l = 10 - str.size();
		while (l > 0)
		{
			res.append(" ");
			l--;
		}
		res.append(str);
	}
	else if (str.size() > 10)
	{
		res = str;
		res.resize(9);
		res.append(".");
	}
	else if (str.size() == 10)
		res = str;
	return (res);
}

void PhoneBook::display_contacts()
{
	int i;

	i = 0;
	std::string space = "          ";
	std::cout << "------------------contacts-------------------" << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	
	while (i < contacts_count)
	{
		std::cout << "|" << "         " << i << "|";
		if (contacts[i].first_name.empty() == 0)
			std::cout << aligne(contacts[i].first_name)  << "|";
		else
			std::cout << space << "|";
		if (contacts[i].last_name.empty() == 0)
			std::cout << aligne(contacts[i].last_name) << "|";
		else
			std::cout << space << "|";
		if (contacts[i].nickname.empty() == 0)
			std::cout << aligne(contacts[i].nickname) << "|";
		else
			std::cout << space << "|";
		i++;
		std::cout << std::endl;
	}
}

int main(void)
{
	PhoneBook book;
	book.contacts_count = 0;
	std::string input = "";
	int index;
	index = 0;
	while (input.compare("EXIT"))
	{
		std::cout << "~ ";
		std::getline(std::cin, input);
		if (input.compare("ADD") == 0)
		{
			book.set_contact(index % 8);
			index++;
		}
		else if (input.compare("SEARCH") == 0)
		{
			book.display_contacts();
			book.print_cont();
		}
	}
	return (0);
}
