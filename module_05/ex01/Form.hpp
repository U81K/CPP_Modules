/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 15:53:02 by bgannoun          #+#    #+#             */
/*   Updated: 2023/12/25 14:50:30 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>

class Bureaucrat;

class Form
{
	private:
		const std::string name;
		bool is_signed;
		const int grade_to_sign;
		const int grade_to_exec;
	public:
		class GradeTooHighException : public std::exception
		{
			public:
				const char *what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				const char *what() const throw();
		};
		Form();
		Form(std::string n, int g_s, int g_e);
		Form(const Form &other);
		Form &operator=(const Form &other);
		~Form();
		std::string getName() const;
		bool issigned() const ;
		int getGradeS() const ;
		int getGradeE() const ;
		void beSigned(const Bureaucrat &bc);
};
 
std::ostream &operator<<(std::ostream &os, const Form &obj);

#endif