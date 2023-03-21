/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_close.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 16:14:09 by besalort          #+#    #+#             */
/*   Updated: 2023/03/21 17:14:05 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_exit(mlxid *id)
{
	if (id->mlx != NULL && id->win != NULL)
		mlx_destroy_window(id->mlx, id->win);
	ft_freemap(id);
	ft_freeimgl(id);
	exit(EXIT_FAILURE);
	return (0);
}

void	ft_freemap(mlxid *id)
{
	if (id->map)
		free(id->map);
}

void	ft_freeimgl(mlxid *id)
{
	free(id->imgl.wall.img);
	free(id->imgl.grd.img);
	free(id->imgl.plr.img);
	free(id->imgl.key.img);
	free(id->imgl.trp.img);
}
