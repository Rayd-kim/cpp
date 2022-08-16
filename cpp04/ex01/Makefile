NAME = ex01

COMPILE = c++ -Wall -Werror -Wextra -Wall

STD = -std=c++98

FILE = main.cpp \
		Animal.cpp \
		Dog.cpp \
		Cat.cpp

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