CC = gcc
CFLAGS = -O2 -march=native
NAME = main
NAME_MODULE = module
TAM = 30

all:
	$(CC) $(NAME).c $(NAME_MODULE).c -o $(NAME) $(CFLAGS)
	./$(NAME) $(TAM) 