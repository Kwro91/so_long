/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 16:01:14 by besalort          #+#    #+#             */
/*   Updated: 2023/03/22 19:13:05 by besalort         ###   ########.fr       */
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
		char	**mapcpy;
		t_imgl	imgl;
		t_game	info;
	}	mlxid;

int		ft_check(mlxid *id);
int		ft_checkmap(mlxid *id);
int		ft_check_down(mlxid *id, int key);
int		ft_check_left(mlxid *id, int key);
int		ft_check_right(mlxid *id, int key);
int		ft_check_up(mlxid *id, int key);
int		ft_count_height(mlxid *id);
int		ft_count_width(mlxid *id);
int		ft_exit(mlxid *id);
int		ft_key_count(mlxid *id);
int		ft_key_pressed(int key, mlxid *id);
int		ft_is_char_good(char c);
int		ft_is_char_hide(char c);
int		ft_is_replace(mlxid *id, int x, int y);
int		ft_plr_count(mlxid *id);
int		ft_trp_count(mlxid *id);
void	ft_trappeload(mlxid *id);
void	ft_animalload(mlxid *id);
void	ft_groundload(mlxid *id);
void	ft_error(mlxid *id, char *error);
void	ft_check_end(mlxid *id);
void	ft_check_key(mlxid *id);
void	ft_check_name(mlxid *id, char *name);
void	ft_drawmap(mlxid *id);
void	ft_load_values(mlxid *id, char *name);
void	ft_load_img(mlxid *id);
void	ft_drawmap_uses(mlxid *id, char c, t_pos i);
void	ft_keyload(mlxid *id);
void	ft_mapcpy(mlxid *id);
void	ft_maptransform(mlxid *id, char *name);
void	ft_move_up(mlxid *id, int key);
void	ft_move_down(mlxid *id, int key);
void	ft_move_right(mlxid *id, int key);
void	ft_move_left(mlxid *id, int key);
void	ft_check_line_down(mlxid *id);
void	ft_check_line_up(mlxid *id);
void	ft_check_line_left(mlxid *id);
void	ft_check_line_right(mlxid *id);
void	ft_check_height(mlxid *id);
void	ft_check_width(mlxid *id);
void	ft_check_parse_map(mlxid *id);
void	ft_check_parse_mapcpy(mlxid *id);
void	ft_freemap(mlxid *id);
void	ft_freeimgl(mlxid *id);
void	ft_linecpy(mlxid *id, int y);
void	ft_parsing(mlxid *id);
void	ft_pars_direction(mlxid *id, int x, int y);
void	ft_wallload(mlxid *id);
t_pos	ft_where(mlxid *id);
#endif