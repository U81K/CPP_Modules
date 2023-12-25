/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 09:18:14 by bgannoun          #+#    #+#             */
/*   Updated: 2023/12/25 14:57:17 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Bureaucrat_hpp
#define Bureaucrat_hpp

#include <iostream>
#include "Form.hpp"

class Bureaucrat
{
	private:
		const std::string name;
		int grade;
	public:
		class GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		
		class GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		
		Bureaucrat();
		Bureaucrat(std::string n, int g);
		Bureaucrat(const Bureaucrat &other);
		Bureaucrat &operator=(const Bureaucrat &other);
		~Bureaucrat();
		std::string getName() const;
		int getGrade() const;
		void increment();
		void decrement();
		void signForm(Form &f);//
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj);

#endif