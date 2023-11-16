# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/03 03:49:14 by bgannoun          #+#    #+#              #
#    Updated: 2023/10/11 12:17:04 by bgannoun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=	c++
NAME	=	BraiiiiiiinnnzzzZ
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98
RM		=	-rm -rf
SRCS	=	main.cpp \
			NewZombie.cpp \
			RandomChump.cpp \
			Zombie.cpp
OBJS	=	$(SRCS:.cpp=.o)

$(NAME)	:	$(OBJS)
	c++ $(CFLAGS) $(OBJS) -o $(NAME)

all		:	$(NAME)

clean	:
	$(RM) $(OBJS)

fclean	:	clean
	$(RM) $(NAME)

re		:	fclean all
