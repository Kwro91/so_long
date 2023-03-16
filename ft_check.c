/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 16:08:23 by besalort          #+#    #+#             */
/*   Updated: 2023/03/16 17:53:08 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"so_long.h"

void	ft_check_key(mlxid *id)
{
	if(ft_key_count(id) == 0)
	{
		id->imgl.plr.path = "./img/Animal_key.xpm";
		id->imgl.plr.img = mlx_xpm_file_to_image(id->mlx, id->imgl.plr.path, &id->imgl.plr.wdth, &id->imgl.plr.hgt);
	}
}

void	ft_check_end(mlxid	*id)
{
	id->info.trp = ft_trp_count(id);
	if (id->info.trp == 0)
		ft_exit(id);
}

int		ft_check(mlxid *id)
{
	if (ft_checkmap(id) == 1)
		return (1);
	return (0);
}