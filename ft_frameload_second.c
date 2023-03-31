/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_frameload_second.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 17:46:17 by besalort          #+#    #+#             */
/*   Updated: 2023/03/31 18:01:56 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_trappe_playerload(mlxid *id)
{
	id->imgl.trpp.path = "./img/Trappe_player.xpm";
	id->imgl.trpp.hgt = 50;
	id->imgl.trpp.wdth = 50;
	id->imgl.trpp.img = mlx_xpm_file_to_image(id->mlx, id->imgl.trpp.path,
			&id->imgl.trpp.wdth, &id->imgl.trpp.hgt);
	if (id->imgl.trpp.img == NULL)
		ft_error(id, "Error, put valid frames\n");
}