# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/29 21:03:02 by bgannoun          #+#    #+#              #
#    Updated: 2023/11/29 21:04:00 by bgannoun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	a.out
RM		=	rm -rf
FLAGS	=	-Wall -Wextra -Werror -std=c++98
SRCS	=	main.cpp \
			Fixed.cpp
OBJS	=	$(SRCS:.cpp=.o)

$(NAME)	:	$(OBJS)
	c++ $(FLAGS) $(OBJS) -o $(NAME)

all		:	$(NAME)

clean	:
	$(RM) $(OBJS)

fclean	:	clean
	$(RM) $(NAME)

re		: fclean all
