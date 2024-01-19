/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 17:15:09 by bgannoun          #+#    #+#             */
/*   Updated: 2024/01/13 17:18:06 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef whatever_HPP
#define whatever_HPP

template<typename T>
void swap(T &a, T &b){
	T tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
T min(T &a, T &b){
	if (a == b)
		return (b);
	if (a < b)
		return (a);
	else
		return (b);
}

template<typename T>
T max(T &a, T &b){
	if (a == b)
		return (b);
	if (a < b)
		return (b);
	else
		return (a);
}

#endif