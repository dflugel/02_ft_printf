# Files:

MANDO =	ft_printf.c \
		ft_print_nbrs.c \
		ft_print_hex.c \
		ft_print_chrs.c \
		ft_print_ptr.c

INCDIRS =-I.

# Rules:
NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror $(INCDIRS)

MANDOOBJ	= $(MANDO:.c=.o)

all: $(NAME)

$(NAME): $(MANDOOBJ)
	$(MAKE) -C libft all
	cp libft/libft.a .
	mv libft.a $(NAME)
	ar -rcs $@ $^

%.o:%.c
	$(CC) -c $(CFLAGS) $^ -o $@

#testcompile: test.c
#	$(CC) $(CFLAGS) -o test.o test.c $(NAME)

test: $(NAME) #testcompile
	$(CC) $(CFLAGS) -o test.o test.c $(NAME)

clean:
	rm -f $(MANDOOBJ)

libftclean:
	$(MAKE) -C libft fclean

fclean: clean libftclean
	rm -f $(NAME)

re: fclean all
