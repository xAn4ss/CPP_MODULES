SRC = main.cpp \

FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = RPN

all : $(NAME)

$(NAME): $(SRC)
	@c++ $(FLAGS) $(SRC) -o $(NAME)

clean :
	@rm -rf $(NAME)

fclean : clean 

re : clean all
