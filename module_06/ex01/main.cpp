/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 10:31:32 by bgannoun          #+#    #+#             */
/*   Updated: 2024/01/12 11:33:17 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void) {

	Data p;
	p.setType("test");
	Data *ptr = Serializer::deserialize(Serializer::serialize(&p));
	p.getType();
	ptr->getType();
	return (0);
}
