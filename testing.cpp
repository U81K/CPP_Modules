/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testing.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 11:39:04 by bgannoun          #+#    #+#             */
/*   Updated: 2023/12/16 14:10:09 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class shape
{
	public:
		virtual int area()
		{
			return (0);
		}	
};

class Rectangle : public shape
{
  int length, width;
  public:
       Rectangle(){
           length = 0;
           width = 0;
       }
       Rectangle(int l, int w){
           length = l;
           width = w;
       }
       int area()
       {
          return (length * width);
       }
};

int main ()
{
	Rectangle r(5, 5);
	shape *pr = &r;
	
	std::cout << r.area() << std::endl;
	std::cout << pr->area() << std::endl;
	
   return 0;
}
