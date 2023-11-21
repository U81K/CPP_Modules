# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/21 12:19:53 by bgannoun          #+#    #+#              #
#    Updated: 2023/11/21 12:31:32 by bgannoun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=	c++
NAME	=	harlFilter
RM		=	rm -rf
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98
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
