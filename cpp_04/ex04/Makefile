SRC = main.cpp AMateria.cpp Character.cpp Cure.cpp\
		Ice.cpp MateriaSource.cpp

FLAGS = -Wall -Wextra -Werror -std=c++98

all : a.out

a.out : $(SRC)
	@c++ $(SRC) $(FLAGS)

clean :
	@rm a.out

fclean : clean

re : fclean all