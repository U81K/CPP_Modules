# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/03 03:49:14 by bgannoun          #+#    #+#              #
#    Updated: 2023/09/03 04:47:57 by bgannoun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	BraiiiiiiinnnzzzZ
CFLAGS	=	-Wall -Wextra -Werror -std=c++98
RM		=	-rm -rf
SRCS	=	main.cpp \
			newZombie.cpp \
			randomChump.cpp \
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
