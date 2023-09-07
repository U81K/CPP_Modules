# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/03 08:12:31 by bgannoun          #+#    #+#              #
#    Updated: 2023/09/03 08:17:41 by bgannoun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	BRAIN
RM		=	-rm -rf
CFLAGS	=	-Wall -Wextra -Werror -std=c++98
SRCS	=	main.cpp
OBJS	=	$(SRCS:.cpp=.o)

$(NAME)	:	$(OBJS)
	c++ $(CFLAGS) $(OBJS) -o $(NAME)

all		:	$(NAME)

clean	:
	$(RM) $(OBJS)

fclean	:	clean
	$(RM) $(NAME)

re		:	fclean all
