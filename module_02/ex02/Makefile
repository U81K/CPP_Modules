# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/05 10:27:44 by bgannoun          #+#    #+#              #
#    Updated: 2023/12/06 16:51:09 by bgannoun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	a.out
RM		=	rm -rf
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98
SRCS	=	Fixed.cpp main.cpp
INC		=	Fixed.hpp
OBJS	=	$(SRCS:.cpp=.o)

all		:	$(NAME)

$(NAME)	: $(OBJS) $(INC)
	c++ $(CFLAGS) $(OBJS) -o $(NAME)

clean	:
	$(RM) $(OBJS)

fclean	:	clean
	$(RM) $(NAME)

re		: fclean all
