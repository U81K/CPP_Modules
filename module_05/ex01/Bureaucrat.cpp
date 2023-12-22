/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 09:18:04 by bgannoun          #+#    #+#             */
/*   Updated: 2023/12/21 17:45:34 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Bureaucrat::GradeTooHighException");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat::GradeTooLowException");
}

Bureaucrat::Bureaucrat() : name("default") {
	std::cout << "default constructor" << std::endl;
	grade = -1;
}
		
Bureaucrat::Bureaucrat(std::string n, int g) : name(n){
	std::cout << "para constructor " << n << std::endl;
	if (g < 1)
		throw(GradeTooHighException());
	else if (g > 150)
		throw(GradeTooLowException());
	else
		grade = g;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : name(other.name), grade(other.grade) {}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this != &other)
	{
		grade = other.grade;
	}
	return (*this);
}

Bureaucrat::~Bureaucrat(){
	std::cout << "destructor " << name << std::endl;
}

std::string Bureaucrat::getName() const{
	return (name);
}

int Bureaucrat::getGrade() const {
	return (grade);
}

void Bureaucrat::increment(){
	if(grade - 1 < 1)
		throw (GradeTooHighException());
	grade--;
}

void Bureaucrat::decrement(){
	if (grade + 1 > 150)
		throw (GradeTooLowException());
	grade++;
}
		
std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj)
{
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << "." << std::endl;
	return (os);
}
