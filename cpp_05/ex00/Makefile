SRC = Bureaucrat.cpp main.cpp\

FLAGS = -Wall -Werror -Wextra -std=c++98

NAME = Bureaucrat

all: $(NAME)

$(NAME) : $(SRC)
	@c++ $(FLAGS) $(SRC) -o $(NAME)

clean :
	@rm -rf $(NAME)

re : clean all 
