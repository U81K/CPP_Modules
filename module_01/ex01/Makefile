# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/03 06:44:56 by bgannoun          #+#    #+#              #
#    Updated: 2023/11/18 08:11:09 by bgannoun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=	c++
NAME	=	horde_of_Zombies
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98
RM		=	-rm -rf
SRCS	=	main.cpp \
			Zombie.cpp \
			zombieHorde.cpp
OBJS	=	$(SRCS:.cpp=.o)

$(NAME)	:	$(OBJS)
	c++ $(CFLAGS) $(OBJS) -o $(NAME)

all		:	$(NAME)

clean	:
	$(RM) $(OBJS)

fclean	:	clean
	$(RM) $(NAME)

re		:	fclean all
