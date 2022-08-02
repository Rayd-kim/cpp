NAME = megaphone

C = c++ -Wall -Werror -Wextra

STD = -std=c++98

FILE = megaphone.cpp

OBJS = $(FILE:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(C) $(STD) $(OBJS) -o $(NAME)

%.o : %.cpp
	$(C) $(STD) -c $< -o $@

clean :
	rm -rf $(OBJS)

fclean :
	make clean
	rm -rf $(NAME)

re :
	make fclean
	make all

.PHONY : all clean fclean re