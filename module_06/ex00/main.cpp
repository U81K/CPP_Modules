/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 17:20:19 by bgannoun          #+#    #+#             */
/*   Updated: 2024/01/11 18:25:53 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScalarConverte.hpp"

int main(int ac, char **av)
{
	if (ac == 2)
		ScalarConverte::convert(av[1]);
	return (0);
}