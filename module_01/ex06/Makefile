# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/07 19:42:28 by bgannoun          #+#    #+#              #
#    Updated: 2023/09/08 09:15:28 by bgannoun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	harlFilter
RM		=	rm -rf
FLAGS	=	-Wall -Wextra -Werror -std=c++98
SRCS	=	main.cpp \
			Harl.cpp
OBJS	=	$(SRCS:.cpp=.o)

$(NAME)	:	$(OBJS)
	c++ $(FLAGS) $(OBJS) -o $(NAME)

all		:	$(NAME)

clean	:
	$(RM) $(OBJS)

fclean	:	clean
	$(RM) $(NAME)

re		:	fclean all
