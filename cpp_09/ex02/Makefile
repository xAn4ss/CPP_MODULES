SRC = main.cpp Pmerge.cpp\

FLAGS = -Wall -Werror -Wextra std=c98++

NAME = Pmerge

all : $(NAME)

$(NAME) : $(SRC)
	@c++ $(FLAGS) $(SRC) -o $(NAME)

clean :
	@rm -rf $(NAME)

fclean : clean

re : clean all