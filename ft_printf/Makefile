NAME = libftprintf.a

CC = cc

FLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c \
	ft_check_type.c \
	ft_lowerhex.c \
	ft_upperhex.c \
	ft_putchar.c \
	ft_putstr.c \
	ft_strlen.c \
	ft_strdup.c \
	ft_hexlen.c \
	ft_putnbr.c \
	ft_putp.c \
	ft_atoi.c

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	ar -rc $(NAME) $(OBJS)

all: $(NAME)

.c.o:
	$(CC) $(FLAGS) -c $(<) -o $(<:.c=.o)

clean:
	rm -rf $(OBJS) 

fclean: clean
	rm -rf $(NAME)	

re: fclean all
