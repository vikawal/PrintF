NAME = libftprintf.a
FLAGS = -Wall -Wextra -Werror
HEADER = ft_print.h
SRCS = \
help_functions.c \
2_help_functions.c \
ft_printf.c


OBJS = $(SRCS:.c=.o)

LIBFT = ./LIBFT

.c.o:
	cc ${FLAGS} -c $< -o ${<:.c=.o}

all: $(NAME) $(LIBFT)

$(NAME): $(OBJS) $(LIBFT)
	$(MAKE) -C $(LIBFT)
	cp $(LIBFT)/libft.a $(NAME)
	ar rcs $(NAME) $(OBJS)

clean: 
	rm -f $(OBJS)
	$(MAKE) -C $(LIBFT) clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(LIBFT) fclean

re: fclean all

test: all
	cc main.c -o main -L. -ft_print -L$(LIBFT) -lft  
	./main


.PHONY: all clean fclean re test