# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/12 10:31:20 by bgannoun          #+#    #+#              #
#    Updated: 2024/01/12 11:39:41 by bgannoun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Serializer
RM		=	rm -rf
CXXFLAGS=	-Wall -Wextra -Werror -std=c++98
SRCS	=	main.cpp Serializer.cpp Data.cpp
OBJS	=	$(SRCS:.cpp=.o)
INC		=	Serializer.hpp Data.hpp

all		:	$(NAME)

$(NAME)	:	$(OBJS) $(INC)
	c++ $(CXXFLAGS) $(OBJS) -o $(NAME)

clean	:
	$(RM) $(OBJS)
	
fclean 	: clean
	$(RM) $(NAME)

re		: fclean all
