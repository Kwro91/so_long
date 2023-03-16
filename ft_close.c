/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_close.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 16:14:09 by besalort          #+#    #+#             */
/*   Updated: 2023/03/16 18:09:08 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_exit(mlxid *id)
{
	mlx_destroy_window(id->mlx, id->win);
	ft_freemap(id);
	ft_freeimgl(id);
	return (exit(0), 0);
}

void	ft_freemap(mlxid *id)
{
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
