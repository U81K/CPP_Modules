# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/11 18:14:17 by bgannoun          #+#    #+#              #
#    Updated: 2023/12/11 18:30:33 by bgannoun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	a.out
RM			=	rm -rf
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98
SRCS		=	main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
INC			=	ClapTrap.hpp ScavTrap.hpp FragTrap.hpp
OBJS		=	$(SRCS:.cpp=.o)

all		:	$(NAME)

$(NAME) : $(OBJS) $(INC)
	c++	$(CFLAGS) $(OBJS) -o $(NAME)

clean	:
	$(RM) $(OBJS)

fclean	:	clean
	$(RM) $(NAME)

re		:	fclean all
