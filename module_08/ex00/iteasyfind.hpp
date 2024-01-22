/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iteasyfind.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 11:22:02 by bgannoun          #+#    #+#             */
/*   Updated: 2024/01/21 18:41:36 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef iteasyfind_HPP
#define iteasyfind_HPP

#include <algorithm>

class NotFoundE : public std::exception{
	public:
		const char *what() const throw() {
			return ("not found");
		}
};

template<typename T>
void easyfind(T cont, int n){
	if (cont.end() != std::find(cont.begin(), cont.end(), n))
		std::cout << "element " << n << " is found" << std::endl;
	else
		throw(NotFoundE());
}

#endif