# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: besalort <besalort@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/08 16:02:49 by besalort          #+#    #+#              #
#    Updated: 2023/03/03 18:07:12 by besalort         ###   ########.fr        #
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

SRC = ft_so_long.c \
	ft_inputs.c \
	ft_frameload.c \
	ft_drawmap.c \
	ft_move.c \
	ft_position.c \
	ft_check.c \
	ft_load.c \
	ft_map_check.c \
	ft_count.c \
	

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

re: fclean all

.PHONY: all clean fclean re init