NAME = push_swap 
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
LIBFT = libft/libft.a

SRCS = push_swap.c push.c swap.c rotate.c reverse_rotate.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(LIBFT):
	make -C libft

$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
