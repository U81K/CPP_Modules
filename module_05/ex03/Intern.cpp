/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 21:05:34 by bgannoun          #+#    #+#             */
/*   Updated: 2024/01/02 12:30:40 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

AForm *createShrubbery(std::string target){
	std::cout << "Intern creates ShrubberyCreationForm" << std::endl;
	return (new ShrubberyCreationForm(target));
}

AForm *createRobotomy(std::string target){
	std::cout << "Intern creates RobotomyRequestForm" << std::endl;
	return (new RobotomyRequestForm(target));
}

AForm *createPresidential(std::string target){
	std::cout << "Intern creates PresidentialPardonForm" << std::endl;
	return (new PresidentialPardonForm(target));
}

AForm *Intern::makeForm(std::string fname, std::string target)
{
	createForms forms[3] = {&createShrubbery, &createRobotomy, &createPresidential};
	std::string formNames[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	for(int i = 0; i < 3; i++){
		if (fname == formNames[i])
			return (forms[i](target));
	}
	std::cout << "form not found" << std::endl;
	return (nullptr);
}
