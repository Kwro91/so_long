/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 14:36:53 by besalort          #+#    #+#             */
/*   Updated: 2023/03/24 19:16:08 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"so_long.h"

int	ft_is_char_good(char c)
{
	if (c == '1' || c == '0' || c == 'P' || c == 'E' || c == 'C')
		return (1);
	return (0);
}

void	ft_check_parse_map(mlxid *id)
{
	int	i;
	int	j;

	j = 0;
	while (id->map[j])
	{
		i = 0;
		while (id->map[j][i])
		{
			if (ft_is_char_good(id->map[j][i]) == 0)
				ft_error(id, "Error, invalid characters in map\n");
			i++;
		}
		j++;
	}
}

void	ft_check_width(mlxid *id)
{
	int	y;
	int	i;

	i = 0;
	y = 0;
	while (id->map[y])
	{
		while (id->map[y][i])
			i++;
		if (i != ((id->width) / 50))
			ft_error(id, "Error map, map is not a rectangle (Width)\n");
		i = 0;
		y++;
	}
}

void	ft_check_height(mlxid *id)
{
	int	y;
	int	i;

	y = 0;
	i = 0;
	while (id->map[y][i])
	{
		while (id->map[y] && id->map[y][i])
			y++;
		if (y != ((id->height) / 50))
			ft_error(id, "Error map, map is not a rectangle (Height)\n");
		y = 0;
		i++;
	}
}

int	ft_checkmap(mlxid *id)
{
	ft_check_width(id);
	ft_check_height(id);
	ft_check_line_up(id);
	ft_check_line_left(id);
	ft_check_line_down(id);
	ft_check_line_right(id);
	ft_check_parse_map(id);
	ft_parsing(id);
	id->info.key = ft_key_count(id);
	id->info.plr = ft_plr_count(id);
	id->info.trp = ft_trp_count(id);
	return (id->info.key > 0
		&& id->info.plr == 1
		&& id->info.trp == 1);
}
