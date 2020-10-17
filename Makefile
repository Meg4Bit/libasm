NAME = libasm
CC = nasm
SRC =	ft_strlen.s\
		ft_strcpy.s\
		ft_strcmp.s\
		ft_strdup.s
OBJ = $(SRC:.s=.o)

all: $(NAME)

$(NAME): $(OBJ) main.c
	gcc -no-pie main.c $(OBJ) -o $(NAME)
	#ld -m elf_i386 -s -o $(NAME) $(OBJ)

%.o: %.s
	$(CC) -f elf64 $< -o $@

bonus:
	$(MAKE) all

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
