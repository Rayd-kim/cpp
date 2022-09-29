# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: youskim <youskim@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/28 19:28:52 by youskim           #+#    #+#              #
#    Updated: 2022/09/29 20:26:01 by youskim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex02

COMPILE = c++ -Wall -Werror -Wextra

STD = -std=c++98

FILE = main.cpp

OBJS = $(FILE:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(COMPILE) $(STD) $(OBJS) -o $(NAME)

%.o : %.cpp
	$(COMPILE) $(STD) -c $< -o $@

clean :
	rm -rf $(OBJS)

fclean :
	make clean
	rm -rf $(NAME)

re :
	make fclean
	make all

.PHONY : all clean fclean re