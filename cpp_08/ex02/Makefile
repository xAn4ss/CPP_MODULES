SRC = main.cpp 

FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = MutantStack

all : $(NAME)

$(NAME) : $(SRC)
	@c++ $(FLAGS) $(SRC) -o $(NAME)

clean : 
	@rm -rf $(NAME)

re : clean all