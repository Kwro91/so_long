/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_drawmap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 17:56:56 by besalort          #+#    #+#             */
/*   Updated: 2023/05/04 17:18:22 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_drawmap_uses(t_data *id, char c, t_pos i)
{
	char	*number;

	number = ft_itoa(id->inputs);
	if (c == '1')
		mlx_put_image_to_window(id->mlx, id->win,
			id->imgl.wall.img, i.x * 50, i.y * 50);
	else if (c == '0')
		mlx_put_image_to_window(id->mlx, id->win,
			id->imgl.grd.img, i.x * 50, i.y * 50);
	else if (c == 'P')
		mlx_put_image_to_window(id->mlx, id->win,
			id->imgl.plr.img, i.x * 50, i.y * 50);
	else if (c == 'C')
		mlx_put_image_to_window(id->mlx, id->win,
			id->imgl.key.img, i.x * 50, i.y * 50);
	else if (c == 'E')
		mlx_put_image_to_window(id->mlx, id->win,
			id->imgl.trp.img, i.x * 50, i.y * 50);
	else if (c == 'T')
		mlx_put_image_to_window(id->mlx, id->win,
			id->imgl.trpp.img, i.x * 50, i.y * 50);
	mlx_string_put(id->mlx, id->win, 25, 25, 0xFFFF00, "Moves :");
	mlx_string_put(id->mlx, id->win, 75, 25, 0xFFFF00, number);
	free(number);
}

void	ft_drawmap(t_data *id)
{
	t_pos	i;

	i.y = 0;
	while (id->map[i.y] && i.y < id->height / 50)
	{
		i.x = 0;
		while (id->map[i.y][i.x] && i.x < id->width / 50)
		{
			if (id->map[i.y][i.x] == '0' || id->map[i.y][i.x] == '1' ||
					id->map[i.y][i.x] == 'P' || id->map[i.y][i.x] == 'C' ||
						id->map[i.y][i.x] == 'E' || id->map[i.y][i.x] == 'T')
				ft_drawmap_uses(id, id->map[i.y][i.x], i);
			i.x++;
		}
		i.y++;
	}
}
