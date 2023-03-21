/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 16:01:14 by besalort          #+#    #+#             */
/*   Updated: 2023/03/21 18:08:00 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef SO_LONG_H
# define SO_LONG_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
# include "libft/libft.h"
# include "minilibx-linux/mlx.h"
# include <X11/keysym.h>

	# define ON_DESTROY 17

	typedef struct s_img
	{
		void	*img;
		char	*addr; //adresse du debut de la memoire ou l'image est stockee
		int		bitsinpixels; //32 quand on utilise ARGB (nb de bits pour representer une couleur de pixel)
		int		line_bytes; //represente l'image * 4
		int		endian; //bool qui indique comment ARGB est organise (back to front ou front to back)
	}	t_img;

	typedef struct s_pos
	{
		int		x;
		int		y;	
	}	t_pos;

	typedef struct s_xpm
	{
		void	*img;
		char	*path;
		int		wdth;
		int		hgt;
	} t_xpm;

	typedef	struct	s_imgl
	{
		t_xpm	wall;
		t_xpm	grd;
		t_xpm	plr;
		t_xpm	key;
		t_xpm	trp;
	}	t_imgl;

	typedef	struct	s_game
	{
		int		key;
		int		plr;
		int		trp;
	}	t_game;

	typedef struct id
	{
		void	*mlx;
		void	*win;
		int		width;
		int		height;
		int		inputs;
		char	**map;
		t_imgl	imgl;
		t_game	info;
	}	mlxid;


int		ft_check(mlxid *id);
int		ft_checkmap(mlxid *id);
int		ft_count_weight(mlxid *id);
int		ft_count_height(mlxid *id);
int		ft_check_up(mlxid *id, int key);
int		ft_check_down(mlxid *id, int key);
int		ft_check_right(mlxid *id, int key);
int		ft_check_left(mlxid *id, int key);
int		ft_exit(mlxid *id);
void	ft_freemap(mlxid *id);
void	ft_freeimgl(mlxid *id);
int		ft_key_pressed(int key, mlxid *id);
int		ft_key_count(mlxid *id);
int		ft_plr_count(mlxid *id);
int		ft_plrk_count(mlxid *id);
int		ft_trp_count(mlxid *id);
t_pos	ft_where(mlxid *id);
void	trappeload(mlxid *id);
void	keyload(mlxid *id);
void	animalload(mlxid *id);
void	animal_keyload(mlxid id);
void	groundload(mlxid *id);
void	ft_error(mlxid *id, char *error);
void	ft_check_end(mlxid *id);
void	ft_check_key(mlxid *id);
void	ft_check_name(char *name);
void	ft_drawmap(mlxid *id);
void	ft_error_map();
void	ft_error_name(void);
void	ft_load_values(mlxid *id, char *name);
void	ft_load_img(mlxid *id);
void	ft_drawmap_uses(mlxid *id, char c, t_pos i);
void	ft_maptransform(mlxid *id, char *name);
void	ft_move_up(mlxid *id, int key);
void	ft_move_down(mlxid *id, int key);
void	ft_move_right(mlxid *id, int key);
void	ft_move_left(mlxid *id, int key);
void	wallload(mlxid *id);
void	ft_check_line_down(mlxid *id);
void	ft_check_line_up(mlxid *id);
void	ft_check_line_left(mlxid *id);
void	ft_check_line_right(mlxid *id);
void	ft_check_height(mlxid *id);
void	ft_check_width(mlxid *id);
#endif