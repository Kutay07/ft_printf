NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -g
ARFLAGS = -rc
SRC = ft_printf.c ft_printf_utils.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar $(ARFLAGS) $(NAME) $(OBJ)
clean:
	$(RM) $(OBJ)
fclean: clean
	$(RM) $(NAME)
re: fclean all

.PHONY: all clean fclean re
