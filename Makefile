# Files:

MANDO =	ft_printf.c \
		ft_print_nbrs.c \
		ft_print_hex.c \
		ft_print_chrs.c \
		ft_print_ptr.c
		
# Libraries
LIBs = ./libft/libft.a

INCDIRS =-I./libft

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
	$(CC) -c $(CFLAGS) $(INCDIRS) $^ -o $@

test: $(LIBFT) testcompile

testcompile: test.c
	$(CC) $(CFLAGS) -o test.o test.c $(MANDO) $(LIBs)

clean:
	rm -f $(MANDOOBJ)

libftclean:
	$(MAKE) -C libft fclean

fclean: clean libftclean
	rm -f $(NAME)

re: fclean all
