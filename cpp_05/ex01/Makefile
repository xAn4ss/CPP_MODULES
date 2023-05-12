SRC = Bureaucrat.cpp main.cpp\
		Form.cpp\

FLAGS = -Wall -Werror -Wextra -std=c++98

NAME = Form

all: $(NAME)

$(NAME) : $(SRC)
	@c++ $(FLAGS) $(SRC) -o $(NAME)

clean :
	@rm -rf $(NAME)

fclean : clean

re : fclean all
