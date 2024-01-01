/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 18:26:47 by bgannoun          #+#    #+#             */
/*   Updated: 2024/01/01 17:47:11 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	try{
		// // testing ShrubberyCreationForm
			// ShrubberyCreationForm r("robot");
			// Bureaucrat signer("s", 1);
			// r.beSigned(signer);
			// Bureaucrat b1("b1", 1);
			// r.execute(b1);
		// // testing RobotomyRequestForm
			// Bureaucrat exec("exec", 1);
			// RobotomyRequestForm r("target");
			// r.beSigned(exec);
			// r.execute(exec);
		/// testing PresidentialPardonForm
			Bureaucrat b("b1", 1);
			PresidentialPardonForm r("target");
			b.signForm(r);
			b.executeForm(r);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}