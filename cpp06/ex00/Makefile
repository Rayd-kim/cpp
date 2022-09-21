# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: youskim <youskim@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/21 16:25:08 by youskim           #+#    #+#              #
#    Updated: 2022/09/21 16:25:08 by youskim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = convert

COMPILE = c++ -Wall -Werror -Wextra

STD = -std=c++98

FILE = main.cpp \
		Conversion.cpp

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