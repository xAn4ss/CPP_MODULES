SRC = main.cpp newZombie.cpp \
		randomChump.cpp Zombie.cpp

NAME = Zombie

ALL = $(NAME)

FLAGS = -Wall -Werror -Wextra 

$(NAME) : $(SRC)
	@g++ $(FLAGS) $(SRC) -o $(NAME)

clean :
	@rm -rf $(NAME)

fclean : clean

re : fclean all