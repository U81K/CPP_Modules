/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 18:35:44 by bgannoun          #+#    #+#             */
/*   Updated: 2023/12/30 17:48:47 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

const char *AForm::GradeTooHighException::what() const throw(){
	return ("AForm::GradeTooHighException");
}

const char *AForm::GradeTooLowException::what() const throw(){
	return ("AForm::GradeTooLowException");
}

const char *AForm::FormNotSignedException::what() const throw(){
	return ("AForm::FormNotSignedException");
}

AForm::AForm() : name("default"), is_signed(false), grade_to_sign(-1), grade_to_exec(-1)
{
	std::cout << "AForm default constructor" << std::endl;
}

AForm::AForm(std::string n, int g_s, int g_e) : name(n), is_signed(false), grade_to_sign(g_s), grade_to_exec(g_e){
	if (g_s < 1 || g_e < 1)
		throw(GradeTooHighException());
	else if (g_s > 150 || g_e > 150)
		throw(GradeTooLowException());
	std::cout << "AForm para constructor" << std::endl;
}

AForm::AForm(const AForm &other) : name(other.name), is_signed(other.is_signed), grade_to_sign(other.grade_to_sign), grade_to_exec(other.grade_to_exec){
	std::cout << "AForm copy constructor" << std::endl;
}

AForm &AForm::operator=(const AForm &other)
{
	if (this != &other)
	{
		is_signed = other.is_signed;
	}
	return (*this);
}

AForm::~AForm()
{
	std::cout << "AForm destructor" << std::endl;
}

std::string AForm::getName() const{
	return (name);
}

bool AForm::issigned() const {
	return (is_signed);
}

int AForm::getGradeS() const {
	return (grade_to_sign);
}

int AForm::getGradeE() const {
	return (grade_to_exec);
}

void AForm::beSigned(const Bureaucrat &bc)
{
	if (bc.getGrade() <= grade_to_sign)
	{
		is_signed = true;
		std::cout << bc.getName() << " signed " << name << std::endl;
	}
	else
		throw (GradeTooLowException());
}
		
std::ostream &operator<<(std::ostream &os, const AForm &obj)
{
	std::string is_s;
	if (obj.issigned())
		is_s = "is signed";
	else
		is_s = "not signed";
	os << "AForm " << obj.getName() << ", " << is_s << ", Grade to Sign: " << obj.getGradeS() << ", Grade to Execute: " << obj.getGradeE();
	return (os);
}