/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 03:49:29 by bgannoun          #+#    #+#             */
/*   Updated: 2023/10/11 12:30:29 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *z_heap = newZombie("z_heap");
	z_heap->announce();
	delete z_heap; // if we dont free the memory the destructor will not be called and will cause memory leak
	
	randomChump("z_stack");
	return (0);
}
