# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/22 17:43:18 by bgannoun          #+#    #+#              #
#    Updated: 2024/01/22 17:44:07 by bgannoun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	a.out
RM			=	rm -rf
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98
SRCS		=	main.cpp
OBJS		=	$(SRCS:.cpp=.o)
INC			=	MutantStack.hpp

all			:	$(NAME)

$(NAME)		:	$(OBJS) $(INC)
	c++ $(CXXFLAGS) $(OBJS) -o $(NAME)

clean		:	
	$(RM) $(OBJS)

fclean		:	clean
	$(RM) $(NAME)

re			:	fclean all