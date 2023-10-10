# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/07 18:11:55 by bgannoun          #+#    #+#              #
#    Updated: 2023/09/07 18:14:49 by bgannoun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Harl
RM		=	rm -rf
FLAGS	=	-Wall -Wextra -Werror -std=c++98
OBJS	=	$(SRCS:.cpp=.o)
SRCS	=	main.cpp \
			Harl.cpp

$(NAME)	:	$(OBJS)
	c++ $(FLAGS) $(OBJS) -o $(NAME)

all		:	$(NAME)

clean	:
	$(RM) $(OBJS)

fclean	:	clean
	$(RM) $(NAME)

re		:	fclean all