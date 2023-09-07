# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/07 10:25:17 by bgannoun          #+#    #+#              #
#    Updated: 2023/09/07 10:30:55 by bgannoun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Sed
RM		=	rm -rf
FLAGS	=	-Wall -Wextra -Werror -std=c++98
OBJS	=	$(SRCS:.cpp=.o)
SRCS	=	main.cpp

$(NAME)	:	$(OBJS)
	c++ $(FLAGS) $(OBJS) -o $(NAME)

all		:	$(NAME)

clean	:
	$(RM) $(OBJS)

fclean	:	clean
	$(RM) $(NAME)

re		:	fclean all