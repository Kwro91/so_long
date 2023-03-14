/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 16:01:14 by besalort          #+#    #+#             */
/*   Updated: 2023/03/14 18:52:11 by besalort         ###   ########.fr       */
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

enum 
{
	ON_KEYDOWN = 2,
	ON_KEYUP = 3,
	ON_MOUSEDOWN = 4,
	ON_MOUSEUP = 5,
	ON_MOUSEMOVE = 6,
	ON_EXPOSE = 12,
	ON_DESTROY = 17
};

int		ft_check(mlxid *id);
int		ft_checkmap(mlxid *id);
int		ft_key_pressed(int key, mlxid *id);
int		ft_count_weight(mlxid *id);
int		ft_count_height(mlxid *id);
int		ft_closewin(mlxid id);
int		ft_check_up(mlxid *id, int key);
int		ft_check_down(mlxid *id, int key);
int		ft_check_right(mlxid *id, int key);
int		ft_check_left(mlxid *id, int key);
int		ft_key_count(mlxid *id);
int		ft_plr_count(mlxid *id);
int		ft_plrk_count(mlxid *id);
int		ft_trp_count(mlxid *id);
t_pos	ft_where(mlxid *id);
t_xpm	trappeload(mlxid id);
t_xpm	keyload(mlxid id);
t_xpm	animalload(mlxid id);
t_xpm	wallload(mlxid id);
t_xpm	groundload(mlxid id);
t_xpm	animal_keyload(mlxid id);
void	ft_drawmap(mlxid *id);
void	ft_load_values(mlxid *id);
void	ft_load_img(mlxid *id);
void	ft_drawmap_uses(mlxid *id, char c, t_pos i);
void	ft_maptransform(mlxid *id);
void	ft_move_up(mlxid *id, int key);
void	ft_move_down(mlxid *id, int key);
void	ft_move_right(mlxid *id, int key);
void	ft_move_left(mlxid *id, int key);
#endif