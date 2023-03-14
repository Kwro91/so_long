/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_frameload.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 17:46:43 by besalort          #+#    #+#             */
/*   Updated: 2023/03/14 16:41:03 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

t_xpm	groundload(mlxid id)
{
	t_xpm	grd;

	grd.path = "./img/Ground.xpm";
	grd.hgt = 50;
	grd.wdth = 50;
	grd.img = mlx_xpm_file_to_image(id.mlx, grd.path, &grd.wdth, &grd.hgt);
	return (grd);
}

t_xpm	wallload(mlxid id)
{
	t_xpm	wal;

	wal.path = "./img/Wall.xpm";
	wal.hgt = 50;
	wal.wdth = 50;
	wal.img = mlx_xpm_file_to_image(id.mlx, wal.path, &wal.wdth, &wal.hgt);
	return (wal);
}

t_xpm	animalload(mlxid id)
{
	t_xpm	plr;

	plr.path = "./img/Animal.xpm";
	plr.hgt = 50;
	plr.wdth = 50;
	plr.img = mlx_xpm_file_to_image(id.mlx, plr.path, &plr.wdth, &plr.hgt);
	return (plr);
}

t_xpm	keyload(mlxid id)
{
	t_xpm	key;

	key.path = "./img/Key.xpm";
	key.hgt = 50;
	key.wdth = 50;
	key.img = mlx_xpm_file_to_image(id.mlx, key.path, &key.wdth, &key.hgt);
	return (key);
}

t_xpm	trappeload(mlxid id)
{
	t_xpm	trp;

	trp.path = "./img/Trappe.xpm";
	trp.hgt = 50;
	trp.wdth = 50;
	trp.img = mlx_xpm_file_to_image(id.mlx, trp.path, &trp.wdth, &trp.hgt);
	return (trp);
}
