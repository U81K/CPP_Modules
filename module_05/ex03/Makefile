# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/26 18:25:56 by bgannoun          #+#    #+#              #
#    Updated: 2024/01/01 21:13:20 by bgannoun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	a.out
RM			=	rm -rf
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98
SRCS		=	main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp
OBJS		=	$(SRCS:.cpp=.o)
INC			=	Bureaucrat.hpp AForm.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp Intern.hpp

all			:	$(NAME)

$(NAME)		:	$(OBJS) $(INC)
	c++ $(CXXFLAGS) $(OBJS) -o $(NAME)

clean		:	
	$(RM) $(OBJS)

fclean		:	clean
	$(RM) $(NAME)

re			:	fclean all
