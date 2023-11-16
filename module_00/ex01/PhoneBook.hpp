/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 01:37:06 by bgannoun          #+#    #+#             */
/*   Updated: 2023/10/14 13:58:52 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

class PhoneBook
{
		private:
	Contacts contacts[8];
	int contacts_count;
		public:
	int get_count();
	void set_count(int c);
	void set_contact(int i);
	void get_input(std::string &to_fill, std::string qst);
	void display_contacts();
	void print_cont();
};

#endif
