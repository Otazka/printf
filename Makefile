CC = cc
CFLAGS = -Wall -Wextra -Werror -I./incl/
RM = rm -rf
NAME = libftprintf.a

SRCS = ft_printf.c srcs/ft_chose_convert.c srcs/ft_convert_option.c srcs/ft_printf_convert_utils.c srcs/ft_printf_utils.c src/ft_printf_put_utils.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C ./libft
	cp libft/libft.a $(NAME)
	ar rc $(NAME) $(OBJS)
clean:
	$(MAKE) clean -C ./libft
	$(RM) $(OBJS)
fclean: clean
	$(MAKE) fclean -C ./libft
	$(RM) $(NAME)
re: fclean all

.PHONY: all clean fclean re

.SILENT: