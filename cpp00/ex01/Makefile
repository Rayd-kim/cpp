# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: youskim <youskim@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/12 13:51:00 by youskim           #+#    #+#              #
#    Updated: 2022/09/12 13:51:02 by youskim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

COMPILE = c++ -Wall -Werror -Wextra

STD = -std=c++98

FILE = PhoneBook.cpp \
		Contact.cpp \
		main.cpp

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