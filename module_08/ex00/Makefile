# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/19 10:40:59 by bgannoun          #+#    #+#              #
#    Updated: 2024/01/20 11:21:47 by bgannoun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	a.out
RM			=	rm -rf
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98
SRCS		=	main.cpp
OBJS		=	$(SRCS:.cpp=.o)
INC			=	iteasyfind.hpp

all			:	$(NAME)

$(NAME)		:	$(OBJS) $(INC)
	c++ $(CXXFLAGS) $(OBJS) -o $(NAME)

clean		:	
	$(RM) $(OBJS)

fclean		:	clean
	$(RM) $(NAME)

re			:	fclean all