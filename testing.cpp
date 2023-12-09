/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testing.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 11:39:04 by bgannoun          #+#    #+#             */
/*   Updated: 2023/12/09 19:28:03 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class base
{
	public:
		int _id;
		base()
		{
			std::cout << "base constructor called\n";
			_id = 0;
		}
		base(int id) : _id(id) {}
		void get_id()
		{
			std::cout << _id << std::endl;
		}
};

class Derived : public base
{
	public:
		int m_cost;
		Derived()
		{
			std::cout << "derived constructor called\n";
			m_cost = 0;
			_id = 0;
		}
		Derived(int cost, int id) : m_cost(cost){
			_id = id;
		}
		void get_cost()
		{
			std::cout << m_cost << std::endl;
		}
};

int main(void)
{
	// base b;
	Derived d(10, 1);
	d.get_id();
	d.get_cost();
	return (0);
}
