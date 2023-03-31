/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_position.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 15:24:47 by besalort          #+#    #+#             */
/*   Updated: 2023/03/31 18:56:38 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_check_up(mlxid *id, int key)
{
	t_pos	i;

	i = ft_where(id);
	if (key == 119)
	{
		if (id->map[i.y - 1][i.x] == '1')
			return (0);
		if (id->map[i.y - 1][i.x] == 'E' && (ft_key_count(id)))
			return (-1);	
	}
	return (1);
}

int	ft_check_down(mlxid *id, int key)
{
	t_pos	i;

	i = ft_where(id);
	if (key == 115)
	{
		if (id->map[i.y + 1][i.x] == '1')
			return (0);
		if (id->map[i.y + 1][i.x] == 'E' && (ft_key_count(id)))
			return (-1);
	}
	return (1);
}

int	ft_check_right(mlxid *id, int key)
{
	t_pos	i;

	i = ft_where(id);
	if (key == 100)
	{
		if (id->map[i.y][i.x + 1] == '1')
			return (0);
		if ((id->map[i.y][i.x + 1] == 'E' && (ft_key_count(id))))
			return (-1);	
	}
	return (1);
}

int	ft_check_left(mlxid *id, int key)
{
	t_pos	i;

	i = ft_where(id);
	if (key == 97)
	{
		if (id->map[i.y][i.x - 1] == '1')
			return (0);
		if ((id->map[i.y][i.x - 1] == 'E' && (ft_key_count(id))))
			return (-1);
	}
	return (1);
}

t_pos	ft_where(mlxid *id)
{
	t_pos	i;

	i.y = 0;
	while (id->map[i.y] && i.y < id->height / 50)
	{
		i.x = 0;
		while (id->map[i.y][i.x] && i.x < id->width / 50)
		{
			if (id->map[i.y][i.x] == 'P' || id->map[i.y][i.x] == 'T')
				return (i);
			i.x++;
		}
		i.y++;
	}
	return (i);
}
