# Files:

MANDO =	ft_printf.c \
		ft_print_nbrs.c \
		ft_print_hex.c \
		ft_print_chrs.c \
		ft_print_ptr.c
		
# Libraries

# Rules:
NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror $(INCDIRS)

MANDOOBJ	= $(MANDO:.c=.o)

all: $(NAME)

$(NAME): $(MANDOOBJ)
	ar -rcs $@ $^

%.o:%.c
	$(CC) -c $(CFLAGS) $^ -o $@

test: testcompile

testcompile: test.c
	$(CC) $(CFLAGS) -o test.o test.c $(MANDO)

clean:
	rm -f $(MANDOOBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
