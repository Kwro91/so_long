/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 18:01:15 by besalort          #+#    #+#             */
/*   Updated: 2023/03/22 16:27:40 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_key_count(mlxid *id)
{
	t_pos	i;
	int		count;

	count = 0;
	i.y = 0;
	while (id->map[i.y] && i.y < id->height / 50)
	{
		i.x = 0;
		while (id->map[i.y][i.x] && i.x < id->width / 50)
		{
			if (id->map[i.y][i.x] == 'C')
				count++;
			i.x++;
		}
		i.y++;
	}
	return (count);
}

int	ft_plr_count(mlxid *id)
{
	t_pos	i;
	int		count;

	count = 0;
	i.y = 0;
	while (id->map[i.y] && i.y < id->height / 50)
	{
		i.x = 0;
		while (id->map[i.y][i.x] && i.x < id->width / 50)
		{
			if (id->map[i.y][i.x] == 'P')
				count++;
			i.x++;
		}
		i.y++;
	}
	return (count);
}

int	ft_trp_count(mlxid *id)
{
	t_pos	i;
	int		count;

	count = 0;
	i.y = 0;
	while (id->map[i.y] && i.y < id->height / 50)
	{
		i.x = 0;
		while (id->map[i.y][i.x] && i.x < id->width / 50)
		{
			if (id->map[i.y][i.x] == 'E')
				count++;
			i.x++;
		}
		i.y++;
	}
	return (count);
}
