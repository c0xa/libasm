NAME    = libasm.a
SRC     = ft_strlen.s \
		ft_strcpy.s \
		ft_strcmp.s \
		ft_write.s \
		ft_read.s \
		ft_strdup.s 

OBJ     = $(SRC:.s=.o)

%.o:%.s
	nasm -f macho64 $< -o $@

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

all:  $(NAME)

try: all
	gcc -Wall -Wextra -Werror -I./libasm.h libasm.a test.c -o try_libasm
	./try_libasm

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all