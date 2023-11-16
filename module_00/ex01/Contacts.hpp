/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 08:27:13 by bgannoun          #+#    #+#             */
/*   Updated: 2023/10/11 11:44:52 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_HPP
#define CONTACTS_HPP

class Contacts
{
		private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string number;
	std::string darkest_secret;
		public:
	void	set_con(std::string f_name, std::string l_name, std::string n_name, std::string num, std::string dark_s);
	std::string get_f();
	std::string get_l();
	std::string get_n();
	std::string get_num();
	std::string get_dark();
};

#endif
