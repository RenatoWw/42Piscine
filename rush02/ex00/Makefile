#Executable name
NAME = rush-02

#Compiler and flags
CC = cc
CFlags = -Wall -Wextra -Werror

#Base files and object
#atualizar conforme a separação de files
SRCS = main.c utils.c validate.c parse.c dict.c
OBJS = $(SRCS:.c=.o)

#Regra padrão
all: $(NAME)

$(NAME): $(OBJS)
	@echo "compiling the project"
	$(CC) $(CFlags) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)
	@echo "cleaning the file"
fclean:
	rm -f $(NAME)

re: fclean all
