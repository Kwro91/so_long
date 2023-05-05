/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_close.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 16:14:09 by besalort          #+#    #+#             */
/*   Updated: 2023/05/04 17:25:59 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_destroy(t_data *id)
{
	mlx_destroy_image(id->mlx, id->imgl.grd.img);
	mlx_destroy_image(id->mlx, id->imgl.plr.img);
	mlx_destroy_image(id->mlx, id->imgl.key.img);
	mlx_destroy_image(id->mlx, id->imgl.trp.img);
	mlx_destroy_image(id->mlx, id->imgl.wall.img);
	mlx_destroy_image(id->mlx, id->imgl.trpp.img);
	mlx_destroy_window(id->mlx, id->win);
}

void	ft_freemap(t_data *id)
{
	int	i;

	i = 0;
	if (id->map)
	{
		while (id->map[i])
		{
			free(id->map[i]);
			i++;
		}
		free(id->map);
	}
	i = 0;
	if (id->mapcpy)
	{
		while (id->mapcpy[i])
		{
			free(id->mapcpy[i]);
			i++;
		}
		free(id->mapcpy);
	}
}

int	ft_exit(t_data *id)
{
	ft_freemap(id);
	if (id->mlx && id->win)
	{
		ft_destroy(id);
		mlx_destroy_display(id->mlx);
	}
	free(id->mlx);
	exit(0);
}
