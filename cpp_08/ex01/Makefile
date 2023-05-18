SRC = main.cpp Span.cpp

FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Span

all : $(NAME)

$(NAME) : $(SRC)
	@c++ $(FLAGS) $(SRC) -o $(NAME)

clean : 
	@rm -rf $(NAME)

re : clean all