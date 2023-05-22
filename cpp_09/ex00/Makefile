SRC = main.cpp BitcoinExchange.cpp

FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = btc

all : $(NAME)

$(NAME) : $(SRC)
	@c++ $(FLAGS) $(SRC) -o $(NAME)

clean : 
	@rm -rf $(NAME)

fclean: clean

re : clean all