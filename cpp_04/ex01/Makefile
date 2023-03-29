SRC = main.cpp Cat.cpp Dog.cpp Animal.cpp\
		Brain.cpp WrongAnimal.cpp WrongCat.cpp\

FLAGS = -Wall -Wextra -Werror

all : a.out

a.out : $(SRC)
	@c++ $(SRC) $(FLAGS)

clean :
	@rm a.out

fclean : clean

re : fclean all