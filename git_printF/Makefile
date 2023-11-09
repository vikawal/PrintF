NAME = libftprintf.a
FLAGS = -Wall -Wextra -Werror
HEADER = ft_print.h
SRCS = \
help_functions.c \
2_help_functions.c \
ft_printf.c


OBJS = $(SRCS:.c=.o)
LIBFT_PATH = ./LIBFT
LIBFT = $(LIBFT_PATH)/libft.a


all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJS)
$(LIBFT):
	$(MAKE) -C $(LIBFT_PATH)

clean: 
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

test: all
	cc main.c -o main -L. -ft_print -L$(LIBFT) -lft  
	./main


.PHONY: all clean fclean re test