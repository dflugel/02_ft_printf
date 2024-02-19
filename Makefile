NAME 		= 	libftprintf.a

RM 			= 	rm -f
CC 			= 	cc
CFLAGS 		= 	-Wall -Wextra -Werror
AR			= 	ar
ARFLAGS 	= 	-rcs
INCFLAG		= 	-I .


MANDO		= 	ft_printf.c \
				ft_print_nbrs.c \
				ft_print_hex.c \
				ft_print_chrs.c \
				ft_print_ptr.c

MANDOOBJ	= $(MANDO:.c=.o)

all: $(NAME)

$(NAME): $(MANDOOBJ)
	make -C libft
	cp libft/libft.a .
	mv libft.a $(NAME)
	@$(AR) $(ARFLAGS) $@ $^

%.o : %.c
	@$(CC) -c $(CFLAGS) $(INCFLAG) $< -o $@

clean:
	- @$(RM) $(MANDOOBJ)

fclean: clean
	- @$(RM) ${NAME}

re: fclean all
