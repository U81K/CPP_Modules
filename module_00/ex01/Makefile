# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/25 01:34:45 by bgannoun          #+#    #+#              #
#    Updated: 2023/08/31 08:46:19 by bgannoun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	PhoneBook
CFLAGS	=	-Wall -Wextra -Werror -std=c++98
SRCS	=	main.cpp
OBJS	=	$(SRCS:.cpp=.o)
RM		=	rm -rf

$(NAME)	:	$(OBJS)
	c++ $(CFLAGS) $(OBJS) -o $(NAME)

all		:	$(NAME)

clean	:
	$(RM) $(OBJS)

fclean	:	clean
	$(RM) $(NAME)

re		:	fclean all
