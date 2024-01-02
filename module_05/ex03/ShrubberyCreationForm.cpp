/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 18:35:56 by bgannoun          #+#    #+#             */
/*   Updated: 2024/01/01 17:23:02 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : target("NA") {}
ShrubberyCreationForm::ShrubberyCreationForm(std::string t) : AForm("ShrubberyCreationForm", 145, 137), target(t) {}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm(other) {
	target = other.target;
}
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	if (this != &other)
	{
		target = other.target;
	}
	return (*this);
}
ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(Bureaucrat const &executo) const
{
	if (!issigned())
		throw (FormNotSignedException());
	if (executo.getGrade() > this->getGradeE())
		throw (GradeTooLowException());
	// std::cout << executo.getName() << " execute ShrubberyCreationForm"<< std::endl;
	std::ofstream out(target + "_shrubbery");
	if (out.is_open())
	{
		out << "                            .,\n"
			"                              'b      *\n"
			"                               '$    #.\n"
			"                                $:   #:\n"
			"                                *#  @):\n"
			"                                :@,@):   ,.**:'\n"
			"                      ,         :@@*: ..**'\n"
			"                       '#o.    .:(@'.@*\"'\n"
			"                          'bq,..:,@@*'   ,*\n"
			"                          ,p$q8,:@)'  .p*'\n"
			"                         '    '@@Pp@@*'\n"
			"                               Y7'.',\n"
			"                              :@):.\n"
			"                             .:@:'.\n"
			"                           .::(@:.\n";
		out.close();
	}
}