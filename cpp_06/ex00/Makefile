SRC = main.cpp ScalarConverter.cpp

NAME = Convert

FLAGS =  -std=c++98 -Wall -Werror -Wextra

all : $(NAME)

$(NAME) : $(SRC)
	@c++ $(SRC) $(FLAGS) -o $(NAME)
 
clean :
	@rm -rf	$(NAME)

re: clean all 