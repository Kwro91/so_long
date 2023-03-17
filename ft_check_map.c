/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 14:36:53 by besalort          #+#    #+#             */
/*   Updated: 2023/03/17 16:00:43 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"so_long.h"

int	ft_checkmap(mlxid *id)
{
	//backtracking
	id->info.key = ft_key_count(id);
	id->info.plr = ft_plr_count(id);
	id->info.trp = ft_trp_count(id);
	return (id->info.key > 0
		&& id->info.plr == 1
		&& id->info.trp == 1);
}

void	ft_check_key(mlxid *id)
{
	if (ft_key_count(id) == 0)
	{
		id->imgl.plr.path = "./img/Animal_key.xpm";
		id->imgl.plr.img = mlx_xpm_file_to_image(id->mlx, id->imgl.plr.path,
				&id->imgl.plr.wdth, &id->imgl.plr.hgt);
	}
}
