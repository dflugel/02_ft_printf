# Files:

MANDO =	ft_printf.c \
		ft_print_nbrs.c \
		ft_print_hex.c \
		ft_print_chrs.c \
		ft_print_ptr.c
		
# Libraries

libft_compile:
	$(MAKE) -C libft all clean

LIBs = libft/libft.a

# Rules:
NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

MANDOOBJ	= $(MANDO:.c=.o)

all: libft_compile $(NAME)

$(NAME): $(MANDOOBJ)
	@ar rcs $(NAME) $(LIBs) $(MANDOOBJ)

test: $(LIBFT) testcompile

testcompile: test.c
	$(CC) $(CFLAGS) -o test.o test.c $(MANDO) $(LIBs)

clean:
	rm -f $(MANDOOBJ) $(BONUSOBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
