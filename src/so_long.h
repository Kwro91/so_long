/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 16:01:14 by besalort          #+#    #+#             */
/*   Updated: 2023/05/04 17:18:22 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
# include "../libft/libft.h"
# include "../minilibx-linux/mlx.h"
# include <X11/keysym.h>

# define ON_DESTROY 17

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
}	t_xpm;

typedef struct s_imgl
{
	t_xpm	wall;
	t_xpm	grd;
	t_xpm	plr;
	t_xpm	key;
	t_xpm	trp;
	t_xpm	trpp;
}	t_imgl;

typedef struct s_game
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
}	t_data;

//ft_check_lines.c
void	ft_check_line_down(t_data *id);
void	ft_check_line_up(t_data *id);
void	ft_check_line_left(t_data *id);
void	ft_check_line_right(t_data *id);
//ft_check_map.c
int		ft_is_char_good(char c);
void	ft_check_parse_map(t_data *id);
void	ft_check_width(t_data *id);
void	ft_check_height(t_data *id);
int		ft_checkmap(t_data *id);
//ft_check.c
void	ft_check_key(t_data *id);
void	ft_check_name(t_data *id, char *name);
void	ft_check_end(t_data *id);
void	ft_check(t_data *id);
//ft_close.c
int		ft_exit(t_data *id);
void	ft_freemap(t_data *id);
void	ft_destroy(t_data *id);
//ft_count.c
int		ft_key_count(t_data *id);
int		ft_plr_count(t_data *id);
int		ft_trp_count(t_data *id);
//ft_drawmap.c
void	ft_drawmap_uses(t_data *id, char c, t_pos i);
void	ft_drawmap(t_data *id);
//ft_error.c
void	ft_error(t_data *id, char *error);
//ft_frameload.c
void	ft_groundload(t_data *id);
void	ft_wallload(t_data *id);
void	ft_animalload(t_data *id);
void	ft_keyload(t_data *id);
void	ft_trappeload(t_data *id);
//ft_frameload_second.c
void	ft_trappe_playerload(t_data *id);
//ft_inputs.c
int		ft_key_pressed(int key, t_data *id);
//ft_load.c
int		ft_count_height(t_data *id);
int		ft_count_width(t_data *id);
void	ft_maptransform(t_data *id, char *name);
void	ft_load_values(t_data *id, char *name);
void	ft_load_img(t_data *id);
//ft_mapcpy.c
void	ft_linecpy(t_data *id, int y);
void	ft_mapcpy(t_data *id);
//ft_move_exit.c
void	ft_move_right_exit(t_data *id, t_pos i);
void	ft_move_left_exit(t_data *id, t_pos i);
void	ft_move_up_exit(t_data *id, t_pos i);
void	ft_move_down_exit(t_data *id, t_pos i);
//ft_move.c
void	ft_move_up(t_data *id, int key);
void	ft_move_down(t_data *id, int key);
void	ft_move_right(t_data *id, int key);
void	ft_move_left(t_data *id, int key);
//ft_parsing.c
int		ft_is_char_hide(char c);
void	ft_check_parse_mapcpy(t_data *id);
int		ft_is_replace(t_data *id, int x, int y);
void	ft_pars_direction(t_data *id, int x, int y);
void	ft_parsing(t_data *id);
//ft_position.c
int		ft_check_down(t_data *id, int key);
int		ft_check_left(t_data *id, int key);
int		ft_check_right(t_data *id, int key);
int		ft_check_up(t_data *id, int key);
t_pos	ft_where(t_data *id);
//ft_so_long.c
void	so_long(char *name);
#endif