# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: youskim <youskim@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/19 16:01:12 by youskim           #+#    #+#              #
#    Updated: 2022/09/26 18:08:49 by youskim          ###   ########.fr        #
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