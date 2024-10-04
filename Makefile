CC = cc
FLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRCS = ft_isalnum.c ft_isalpha.c ft_isdigit.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME)
		$(CC) $(FLAGS) -c $(SRCS)
		ar rc $(NAME) *.o

clean: rm -rf $(OBJS)

fclean: rm -rf $(NAME)

re: fclean all