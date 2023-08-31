/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 01:37:06 by bgannoun          #+#    #+#             */
/*   Updated: 2023/08/31 08:36:40 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"

class PhoneBook
{
	private:
	Contact contacts[8];
	public:
	int contacts_count;
	void set_contact(int i);
	void get_input(std::string &to_fill, std::string qst);
	void display_contacts();
	void print_cont();
};

#endif
