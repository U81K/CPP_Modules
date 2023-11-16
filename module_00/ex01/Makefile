# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/25 01:34:45 by bgannoun          #+#    #+#              #
#    Updated: 2023/10/11 10:17:33 by bgannoun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC				=	c++
NAME			=	PhoneBook
CXXFLAGS		=	-Wall -Wextra -Werror -std=c++98
SRCS			=	main.cpp
OBJS			=	$(SRCS:.cpp=.o)
RM				=	rm -rf

$(NAME)			:	$(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all				:	$(NAME)

clean			:
	$(RM) $(OBJS)

fclean			:	clean
	$(RM) $(NAME)

re				:	fclean all
