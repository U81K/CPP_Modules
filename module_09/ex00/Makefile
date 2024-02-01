# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/26 16:45:21 by bgannoun          #+#    #+#              #
#    Updated: 2024/01/30 09:32:10 by bgannoun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	btc
RM			=	rm -rf
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98
SRCS		=	main.cpp DataBase.cpp BitcoinExchange.cpp
OBJS		=	$(SRCS:.cpp=.o)
INC			=	BitcoinExchange.hpp DataBase.hpp

all			:	$(NAME)

$(NAME)		:	$(OBJS) $(INC)
	c++ $(CXXFLAGS) $(OBJS) -o $(NAME)

clean		:	
	$(RM) $(OBJS)

fclean		:	clean
	$(RM) $(NAME)

re			:	fclean all