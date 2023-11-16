# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/21 00:44:34 by bgannoun          #+#    #+#              #
#    Updated: 2023/10/10 21:53:50 by bgannoun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			=	c++
NAME		=	megaphone
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98
SRCS		=	megaphone.cpp
RM			=	rm -rf
OBJS		=	$(SRCS:.cpp=.o)

$(NAME)		:	$(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all			:	$(NAME)

clean		:
	$(RM) $(OBJS)

fclean		:	clean
	$(RM) $(NAME)

re			:	fclean all
