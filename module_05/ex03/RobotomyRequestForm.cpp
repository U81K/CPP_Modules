/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 18:36:20 by bgannoun          #+#    #+#             */
/*   Updated: 2024/01/01 17:22:58 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm() : target("NA") {}
RobotomyRequestForm::RobotomyRequestForm(std::string t) : AForm("RobotomyRequestForm", 72, 45), target(t) {}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm(other) {
	target = other.target;
}
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	if (this != &other)
	{
		target = other.target;
	}
	return (*this);
}
RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(Bureaucrat const &executo) const
{
	if (!issigned())
		throw (FormNotSignedException());
	if (executo.getGrade() > getGradeE())
		throw (GradeTooLowException());

	static int s = 0;
	if (s % 2 == 0)
	{
		std::cout << "some drilling noises" << std::endl;
		std::cout << target << " has been robotomized" << std::endl;
	}
	else
		std::cout << "Robotomy failed for " << target << std::endl;
	s++;
}
