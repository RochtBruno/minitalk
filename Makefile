NAME = minitalk.a

SRC_CLIENT = client.c

SRC_SERVER = server.c

OBJ_CLIENT = $(SRC_CLIENT:.c=.o)

OBJ_SERVER = $(SRC_SERVER:.c=.o)

FT_PRINTF = ft_printf/libftprintf.a

FT_PRINTF_DIR = ft_printf

SERVER = server

CLIENT = client

.c.o:
	cc -Wall -Wextra -Werror -c $< -o $(<:.c=.o)

all: $(NAME)
	
$(FT_PRINTF):
	make -C ft_printf

$(SERVER): $(OBJ_SERVER)
	cc -Wall -Wextra -Werror $(OBJ_SERVER) $(FT_PRINTF) -o $(SERVER)

$(CLIENT): $(OBJ_CLIENT)
	cc -Wall -Wextra -Werror $(OBJ_CLIENT) $(FT_PRINTF) -o $(CLIENT)

$(NAME): $(FT_PRINTF) $(SERVER) $(CLIENT)

clean:
	make -C $(FT_PRINTF_DIR) clean
	rm -rf  $(OBJ_SERVER) $(OBJ_CLIENT)

fclean: clean
	make -C $(FT_PRINTF_DIR) fclean
	rm -rf $(NAME) $(SERVER) $(CLIENT) $(OBJ_SERVER) $(OBJ_CLIENT)

re: fclean all	
