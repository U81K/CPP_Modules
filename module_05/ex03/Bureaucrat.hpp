/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 18:27:07 by bgannoun          #+#    #+#             */
/*   Updated: 2024/01/01 17:43:39 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Bureaucrat_hpp
#define Bureaucrat_hpp

#include <iostream>
#include "AForm.hpp"

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
		void signForm(AForm &f);
		void executeForm(AForm const & form);
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj);

#endif