/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 16:08:23 by besalort          #+#    #+#             */
/*   Updated: 2023/03/31 16:51:07 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"so_long.h"

void	ft_check_key(mlxid *id)
{
	if (ft_key_count(id) == 0)
	{
		id->imgl.plr.path = "./img/Animal_key.xpm";
		mlx_destroy_image(id->mlx, id->imgl.plr.img);
		id->imgl.plr.img = mlx_xpm_file_to_image(id->mlx, id->imgl.plr.path,
				&id->imgl.plr.wdth, &id->imgl.plr.hgt);
	}
}

void	ft_check_name(mlxid *id, char *name)
{
	char	*end;

	if (ft_strlen(name) < 5)
		ft_error(id, "Error, the name of the map is not good\n");
	end = ft_strrchr(name, '/');
	if (end)
		if (ft_strncmp(end, "/.ber", 5) == 0)
			ft_error(id, "Error, the name of the map is not good\n");
	end = ft_strrchr(name, '.');
	if (!end)
		ft_error(id, "Error, the name of the map is not good\n");
	if (ft_strncmp(end, ".ber", 4) != 0)
		ft_error(id, "Error, the name of the map is not good\n");
}

void	ft_check_end(mlxid	*id)
{
	id->info.trp = ft_trp_count(id);
	if (id->info.trp == 0)
	{
		ft_putstr_fd("You win !\n", 1);
		ft_exit(id);
	}
}

void	ft_check(mlxid *id)
{
	if (ft_checkmap(id) == 1)
		return ;
	return (ft_error(id, "Error map\n"));
}
