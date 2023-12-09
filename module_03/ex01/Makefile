# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/08 15:00:35 by bgannoun          #+#    #+#              #
#    Updated: 2023/12/08 15:08:50 by bgannoun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	a.out
RM			=	rm -rf
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98
SRCS		=	main.cpp ClapTrap.cpp ScavTrap.cpp
INC			=	ClapTrap.hpp ScavTrap.hpp
OBJS		=	$(SRCS:.cpp=.o)

all		:	$(NAME)

$(NAME) : $(OBJS) $(INC)
	c++	$(CFLAGS) $(OBJS) -o $(NAME)

clean	:
	$(RM) $(OBJS)

fclean	:	clean
	$(RM) $(NAME)

re		:	fclean all
