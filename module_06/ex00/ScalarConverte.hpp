/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverte.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 17:20:48 by bgannoun          #+#    #+#             */
/*   Updated: 2024/01/11 18:25:29 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ScalarConverte_HPP
#define ScalarConverte_HPP

#include <iostream>

class ScalarConverte
{
	private:
		ScalarConverte() {}
	public:
		static void convert(std::string str);
};

#endif