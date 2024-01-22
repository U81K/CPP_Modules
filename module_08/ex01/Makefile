# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/21 18:42:06 by bgannoun          #+#    #+#              #
#    Updated: 2024/01/21 18:44:46 by bgannoun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	ex01
RM			=	rm -rf
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98
SRCS		=	main.cpp Span.cpp
OBJS		=	$(SRCS:.cpp=.o)
INC			=	Span.hpp

all			:	$(NAME)

$(NAME)		:	$(OBJS) $(INC)
	c++ $(CXXFLAGS) $(OBJS) -o $(NAME)

clean		:	
	$(RM) $(OBJS)

fclean		:	clean
	$(RM) $(NAME)

re			:	fclean all