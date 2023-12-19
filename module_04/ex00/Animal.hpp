/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 14:51:14 by bgannoun          #+#    #+#             */
/*   Updated: 2023/12/16 15:50:46 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Animal_hpp
#define Animal_hpp

#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(std::string t);
		Animal(const Animal &other);
		Animal &operator=(const Animal &other);
		virtual ~Animal();
		std::string getType() const;
		virtual void makeSound() const;
};

#endif