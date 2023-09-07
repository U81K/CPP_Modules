# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/03 09:10:07 by bgannoun          #+#    #+#              #
#    Updated: 2023/09/07 10:27:34 by bgannoun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Violence
RM		=	rm -rf
CFLAGS	=	-Wall -Wextra -Werror -std=c++98
OBJS	=	$(SRCS:.cpp=.o)
SRCS	=	Weapon.cpp \
			HumanA.cpp \
			HumanB.cpp \
			main.cpp

$(NAME)	:	$(OBJS)
	c++ $(CFLAGS) $(OBJS) -o $(NAME)

all		:	$(NAME)

clean	:
	$(RM) $(OBJS)

fclean	:	clean
	$(RM) $(NAME)

re		:	fclean all