# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/20 09:17:15 by bgannoun          #+#    #+#              #
#    Updated: 2023/12/22 15:53:13 by bgannoun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	a.out
RM			=	rm -rf
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98
SRCS		=	main.cpp Bureaucrat.cpp Form.cpp
OBJS		=	$(SRCS:.cpp=.o)
INC			=	Bureaucrat.hpp Form.hpp

all			:	$(NAME)

$(NAME)		:	$(OBJS) $(INC)
	c++ $(CXXFLAGS) $(OBJS) -o $(NAME)

clean		:	
	$(RM) $(OBJS)

fclean		:	clean
	$(RM) $(NAME)

re			:	fclean all
