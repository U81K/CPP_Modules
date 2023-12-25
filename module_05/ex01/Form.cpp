/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 15:52:53 by bgannoun          #+#    #+#             */
/*   Updated: 2023/12/24 18:22:42 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

const char *Form::GradeTooHighException::what() const throw(){
	return ("Form::GradeTooHighException");
}

const char *Form::GradeTooLowException::what() const throw(){
	return ("Form::GradeTooLowException");
}

Form::Form() : name("default"), is_signed(false), grade_to_sign(-1), grade_to_exec(-1)
{
	std::cout << "Form default constructor" << std::endl;
}

Form::Form(std::string n, int g_s, int g_e) : name(n), is_signed(false), grade_to_sign(g_s), grade_to_exec(g_e){
	if (g_s < 1 || g_e < 1)
		throw(GradeTooHighException());
	else if (g_s > 150 || g_e > 150)
		throw(GradeTooLowException());
	std::cout << "Form para constructor" << std::endl;
}

Form::Form(const Form &other) : name(other.name), is_signed(other.is_signed), grade_to_sign(other.grade_to_sign), grade_to_exec(other.grade_to_exec){
	std::cout << "Form copy constructor" << std::endl;
}

Form &Form::operator=(const Form &other)
{
	if (this != &other)
	{
		is_signed = other.is_signed;
	}
	return (*this);
}

Form::~Form()
{
	std::cout << "Form destructor" << std::endl;
}

std::string Form::getName() const{
	return (name);
}

bool Form::issigned() const {
	return (is_signed);
}

int Form::getGradeS() const {
	return (grade_to_sign);
}

int Form::getGradeE() const {
	return (grade_to_exec);
}

void Form::beSigned(const Bureaucrat &bc)
{
	if (bc.getGrade() <= grade_to_sign)
	{
		is_signed = true;
		std::cout << bc.getName() << " signed " << name << std::endl;
	}
	else
		throw (GradeTooLowException());
}
		
std::ostream &operator<<(std::ostream &os, const Form &obj)
{
	std::string is_s;
	if (obj.issigned())
		is_s = "is signed";
	else
		is_s = "not signed";
	os << "Form " << obj.getName() << ", " << is_s << ", Grade to Sign: " << obj.getGradeS() << ", Grade to Execute: " << obj.getGradeE();
	return (os);
}
