/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testing.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 11:39:04 by bgannoun          #+#    #+#             */
/*   Updated: 2023/11/26 21:11:04 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class String
{
private:
	std::string *strptr;
public:
	void printing()
	{
		if (strptr)
			std::cout << *strptr << std::endl;
	}
	String()
	{
		strptr = nullptr;
	}
	void	set_str(std::string new_str)
	{
		strptr = new std::string(new_str);
	}
	String(const String& other)/// String copy_str = str;
	{
		if (other.strptr)
			strptr = new std::string(*other.strptr);
		else
			strptr = nullptr;
	}
	String &operator=(const String other)
	{
		std::cout << this << std::endl;
		return(*this);
	}
	~String()
	{
		if (strptr)
			delete strptr;
	}
};


int main(void)
{
	String str;

	str.printing();
	str.set_str("hello");
	str.printing();
	String copy_str(str); //copy constructor
	// copy_str.set_str("world");
	copy_str.printing();
	String ca_str = str; //copy assignment contructor
	ca_str.printing();
	return (0);
}