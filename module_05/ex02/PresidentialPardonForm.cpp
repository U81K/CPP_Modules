/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 18:36:48 by bgannoun          #+#    #+#             */
/*   Updated: 2024/01/01 17:29:55 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm() : target("NA") {}

PresidentialPardonForm::PresidentialPardonForm(std::string t) : AForm("PresidentialPardonForm", 25, 5) , target(t) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : AForm(other){
	target = other.target;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	if (this != &other)
	{
		target = other.target;
	}
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {};

void PresidentialPardonForm::execute(Bureaucrat const &executo) const {
	if (!issigned())
		throw (FormNotSignedException());
	if (executo.getGrade() > getGradeE())
		throw (GradeTooLowException());
	std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
