/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:30:50 by bgannoun          #+#    #+#             */
/*   Updated: 2024/01/16 20:46:51 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Array_HPP
#define Array_HPP

template<typename T>
class Array
{
	private:
		T *arr;
		unsigned int s;
	public:
		Array() : arr(NULL), s(0) {}
		Array(unsigned int n): s(n){
			arr = new T[n];
		}
		Array(const Array &other){
			s = other.s;
			arr = new T[s];
			for(unsigned int i = 0; i < s; i++){
				arr[i] = other.arr[i];
			}
		}
		Array &operator=(const Array &other){
			s = other.s;
			arr = new T[s];
			for(unsigned int i = 0; i < s; i++){
				arr[i] = other.arr[i];
			}
			return (*this);
		}
		T& operator[](unsigned int index){
			if (index >= s)
				throw std::out_of_range("index out of range");
			return (arr[index]);
		}
		~Array(){
			delete[] arr;
		}
		unsigned int size() const{
			return (s);
		}
};

#endif