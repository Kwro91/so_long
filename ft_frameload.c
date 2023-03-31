/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_frameload.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 17:46:43 by besalort          #+#    #+#             */
/*   Updated: 2023/03/29 15:46:17 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_groundload(mlxid *id)
{
	id->imgl.grd.path = "./img/Ground.xpm";
	id->imgl.grd.hgt = 50;
	id->imgl.grd.wdth = 50;
	id->imgl.grd.img = mlx_xpm_file_to_image(id->mlx, id->imgl.grd.path,
			&id->imgl.grd.wdth, &id->imgl.grd.hgt);
	if (id->imgl.grd.img == NULL)
		ft_error(id, "Error, put valid frames\n");
}

void	ft_wallload(mlxid *id)
{
	id->imgl.wall.path = "./img/Wall.xpm";
	id->imgl.wall.hgt = 50;
	id->imgl.wall.wdth = 50;
	id->imgl.wall.img = mlx_xpm_file_to_image(id->mlx, id->imgl.wall.path,
			&id->imgl.wall.wdth, &id->imgl.wall.hgt);
	if (id->imgl.wall.img == NULL)
		ft_error(id, "Error, put valid frames\n");
}

void	ft_animalload(mlxid *id)
{
	id->imgl.plr.path = "./img/Animal.xpm";
	id->imgl.plr.hgt = 50;
	id->imgl.plr.wdth = 50;
	id->imgl.plr.img = mlx_xpm_file_to_image(id->mlx, id->imgl.plr.path,
			&id->imgl.plr.wdth, &id->imgl.plr.hgt);
	if (id->imgl.plr.img == NULL)
		ft_error(id, "Error, put valid frames\n");
}

void	ft_keyload(mlxid *id)
{
	id->imgl.key.path = "./img/Key.xpm";
	id->imgl.key.hgt = 50;
	id->imgl.key.wdth = 50;
	id->imgl.key.img = mlx_xpm_file_to_image(id->mlx, id->imgl.key.path,
			&id->imgl.key.wdth, &id->imgl.key.hgt);
	if (id->imgl.key.img == NULL)
		ft_error(id, "Error, put valid frames\n");
}

void	ft_trappeload(mlxid *id)
{
	id->imgl.trp.path = "./img/Trappe.xpm";
	id->imgl.trp.hgt = 50;
	id->imgl.trp.wdth = 50;
	id->imgl.trp.img = mlx_xpm_file_to_image(id->mlx, id->imgl.trp.path,
			&id->imgl.trp.wdth, &id->imgl.trp.hgt);
	if (id->imgl.trp.img == NULL)
		ft_error(id, "Error, put valid frames\n");
}
