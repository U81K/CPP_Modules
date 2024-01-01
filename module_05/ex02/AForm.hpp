/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 18:27:30 by bgannoun          #+#    #+#             */
/*   Updated: 2023/12/30 17:48:14 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>

class Bureaucrat;

class AForm
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
		
		class FormNotSignedException : public std::exception
		{
			public:
				const char *what() const throw();
		};
		
		AForm();
		AForm(std::string n, int g_s, int g_e);
		AForm(const AForm &other);
		AForm &operator=(const AForm &other);
		~AForm();
		std::string getName() const;
		bool issigned() const ;
		int getGradeS() const ;
		int getGradeE() const ;
		void beSigned(const Bureaucrat &bc);
		virtual void execute(Bureaucrat const &executo) const = 0;
};
 
std::ostream &operator<<(std::ostream &os, const AForm &obj);

#endif