SRC = main.cpp Serializer.cpp Data.cpp

FLAGS =  -std=c++98 -Wall -Werror -Wextra

NAME = Serializer

all : $(NAME)

$(NAME) : $(SRC)
	@c++ $(SRC) $(FLAGS) -o $(NAME)
 
clean :
	@rm -rf	$(NAME)

re: clean all 