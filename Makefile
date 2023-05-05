# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: besalort <besalort@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/08 16:02:49 by besalort          #+#    #+#              #
#    Updated: 2023/05/04 16:52:36 by besalort         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long
CC = cc
AR = ar rcs
CFLAGS = -Wall -Wextra -Werror
MLX    = -I . -Lminilibx-linux -lmlx -lXext -lX11

LIBFT_PATH = ./libft/
CFLAGS += -Wall -Wextra -Werror -g3

LIBFT = $(LIBFT_PATH)libft.a

SRC = ./src/ft_so_long.c \
	./src/ft_check_lines.c \
	./src/ft_check_map.c \
	./src/ft_check.c \
	./src/ft_close.c \
	./src/ft_count.c \
	./src/ft_drawmap.c \
	./src/ft_error.c \
	./src/ft_frameload_second.c \
	./src/ft_frameload.c \
	./src/ft_inputs.c \
	./src/ft_load.c \
	./src/ft_mapcpy.c \
	./src/ft_move_exit.c \
	./src/ft_move.c \
	./src/ft_parsing.c \
	./src/ft_position.c \
	

OBJ = $(SRC:.c=.o)

$(NAME) : $(OBJ) minilibx-linux/libmlx.a
	make -C $(LIBFT_PATH)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) $(MLX) -o $(NAME)

minilibx-linux/libmlx.a:
	$(MAKE) -C minilibx-linux

all : $(NAME)

clean :
	rm -rf $(OBJ)
	make clean -C $(LIBFT_PATH)
	$(MAKE) -C minilibx-linux clean

fclean : clean
	rm -f $(NAME)
	make fclean -C $(LIBFT_PATH)

re : fclean all

.PHONY: all clean fclean re init