NAME = libasm.a
CC = nasm
SRC =	ft_strlen.s\
		ft_strcpy.s\
		ft_strcmp.s\
		ft_strdup.s\
		ft_read.s\
		ft_write.s
OBJ = $(SRC:.s=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rvc $(NAME) $(OBJ)
	@ranlib $(NAME)

main: main.c
	gcc -no-pie main.c -L. -lasm -o main

%.o: %.s
	$(CC) -f elf64 $< -o $@

bonus:
	$(MAKE) all

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME) main

re: fclean all

.PHONY: all clean fclean re
