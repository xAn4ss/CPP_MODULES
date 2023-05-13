SRC = Bureaucrat.cpp main.cpp\
		Form.cpp PresidentialPardonForm.cpp\
		ShrubberyCreationForm.cpp RobotomyRequestForm.cpp\
		Intern.cpp\

FLAGS = -Wall -Werror -Wextra -std=c++98

NAME = Intern

all: $(NAME)

$(NAME) : $(SRC)
	@c++ $(FLAGS) $(SRC) -o $(NAME)

clean :
	@rm -rf $(NAME)

re : clean all
