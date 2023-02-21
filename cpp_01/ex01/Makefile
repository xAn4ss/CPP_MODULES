SRC = main.cpp Zombie.cpp zombieHorde.cpp

NAME = zombieHorde

ALL = $(NAME)

FLAGS = -Wall -Wextra -Werror -std=c++98

$(NAME) : $(SRC)
		@g++ $(FLAGS) $(SRC) -o $(NAME)

clean :
		@rm -rf $(NAME)

fclean : clean

re : fclean all