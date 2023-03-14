/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inputs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 15:24:48 by besalort          #+#    #+#             */
/*   Updated: 2023/03/14 17:29:46 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_closewin(mlxid id)
{
	mlx_destroy_window(id.mlx, id.win);
	return (0);
}

int	ft_key_pressed(int key, mlxid *id)
{
	if (key == 65307)
		exit(0);
	else if (key == 119)
		ft_move_up(id, key);
	else if (key == 115)
		ft_move_down(id, key);
	else if (key == 100)
		ft_move_right(id, key);
	else if (key == 97)
		ft_move_left(id, key);
	ft_drawmap(id);
	id->info.trp = ft_trp_count(id);
	if (id->info.trp == 0)
		exit(0);
	return (0);
}