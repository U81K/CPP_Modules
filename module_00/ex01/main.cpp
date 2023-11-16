/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 01:36:05 by bgannoun          #+#    #+#             */
/*   Updated: 2023/10/14 13:58:44 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

int PhoneBook::get_count()
{
	return (contacts_count);
}

void PhoneBook::set_count(int c)
{
	contacts_count = c;
}

void	Contacts::set_con(std::string f_name, std::string l_name, std::string n_name, std::string num, std::string dark_s)
{
	first_name		= f_name;
	last_name		= l_name;
	nickname		=	n_name;
	number			=	num;
	darkest_secret	= dark_s;
}
std::string Contacts::get_f()
{
	return (first_name);
}
std::string Contacts::get_l()
{
	return (last_name);
}
std::string Contacts::get_n()
{
	return (nickname);
}
std::string Contacts::get_num()
{
	return (number);
}
std::string Contacts::get_dark()
{
	return (darkest_secret);
}

void	PhoneBook::get_input(std::string &to_fill, std::string qst)
{
	if (!std::getline(std::cin, to_fill))
		exit(1);
	std::cin.clear();
	if (to_fill.empty())
	{
		std::cout << "invalid input\n" << qst;
		get_input(to_fill, qst);
	}
}

void PhoneBook::set_contact(int i)
{
	std::string f_name;
	std::string l_name;
	std::string n_name;
	std::string num;
	std::string dark_s;
	
	std::cout << "enter the first name : ";
	get_input(f_name, "enter the first name : ");
	std::cout << "enter the last name : ";
	get_input(l_name, "enter the last name : ");
	std::cout << "enter the nickname : ";
	get_input(n_name, "enter the nickname : ");
	std::cout << "enter the phone number : ";
	get_input(num, "enter the phone number : ");
	std::cout << "enter the darkest secret : ";
	get_input(dark_s, "enter the darkest secret : ");
	
	contacts[i].set_con(f_name, l_name, n_name, num, dark_s);
	
	std::cout << "contact created" << std::endl;
	if (contacts_count < 8)
		contacts_count++;
	return;
}

void PhoneBook::print_cont()
{
	int i;
	std::string to_fill;
	
	if (contacts_count != 0)
	{
		std::cout << "enter the contact index : ";
		get_input(to_fill, "enter the contact index : ");
		std::istringstream index(to_fill);
		if (index >> i)
		{
			if (i >= 8 || i < 0 || i >= contacts_count)
			{
				std::cout << "not found" << std::endl;
				return;	
			}
			else
			{
				std::string f_name = contacts[i].get_f();
				std::string l_name = contacts[i].get_l();
				std::string n_name = contacts[i].get_n();
				std::string num = contacts[i].get_num();
				std::string dark_s = contacts[i].get_dark();
				if (contacts_count == 0)
					std::cout << "emty phonebook\n";
				else
					std::cout << "---contact information---" << std::endl;
				if (f_name.empty() == 0)
					std::cout <<  "first name     : " << f_name << std::endl;
				if (l_name.empty() == 0)
					std::cout <<  "last name      : " << l_name << std::endl;
				if (n_name.empty() == 0)
					std::cout <<  "nickname       : " << n_name << std::endl;
				if (num.empty() == 0)
					std::cout <<  "phone number   : " << num << std::endl;
				if (dark_s.empty() == 0)
					std::cout <<  "darkest secret : " << dark_s << std::endl;
			}
		}
		else
		{		
			std::cout << "not found" << std::endl;
			return;
		}
	}
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
	if (get_count() == 0)
	{
		std::cout << "emty phonebook\n";
		return;	
	}
	std::cout << "------------------contacts-------------------" << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	std::string f_name;
	std::string l_name;
	std::string n_name;
	
	while (i < get_count())
	{
		f_name = contacts[i].get_f();
		l_name = contacts[i].get_l();
		n_name = contacts[i].get_n();
		std::cout << "|" << "         " << i << "|";
		if (f_name.empty() == 0)
			std::cout << aligne(f_name)  << "|";
		else
			std::cout << space << "|";
		if (l_name.empty() == 0)
			std::cout << aligne(l_name) << "|";
		else
			std::cout << space << "|";
		if (n_name.empty() == 0)
			std::cout << aligne(n_name) << "|";
		else
			std::cout << space << "|";
		i++;
		std::cout << std::endl;
	}
	print_cont();
}

int main(void)
{
	PhoneBook book;
	book.set_count(0);
	std::string input = "";
	int index;
	index = 0;
	while (input.compare("EXIT"))
	{
		std::cout << "~ enter a command (ADD, SEARCH, EXIT): ";
		std::getline(std::cin, input);
		if (std::cin.fail())
			return (0);
		std::cin.clear();
		if (input.compare("ADD") == 0)
		{
			book.set_contact(index);
			if (++index == 8)
				index = 0;
		}
		else if (input.compare("SEARCH") == 0)
			book.display_contacts();
	}
	return (0);
}
