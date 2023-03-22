/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_lines.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 17:59:09 by besalort          #+#    #+#             */
/*   Updated: 2023/03/22 16:22:15 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_check_line_up(mlxid *id)
{
	int		i;
	int		y;

	i = 0;
	y = 0;
	while (id->map[y][i])
	{
		if (id->map[y][i] == '1')
			i++;
		else
			ft_error(id, "Erreur de map, ligne du haut non valide");
	}
}

void	ft_check_line_down(mlxid *id)
{
	int		i;
	int		y;

	i = 0;
	y = ((id->height) / 50) - 1;
	while (id->map[y][i] && i < (id->width) / 50)
	{
		if (id->map[y][i] == '1')
			i++;
		else
			ft_error(id, "Erreur de map, ligne du bas non valide");
	}
}

void	ft_check_line_left(mlxid *id)
{
	int		i;
	int		y;

	i = 0;
	y = 0;
	while (id->map[y])
	{
		if (id->map[y][i] == '1')
			y++;
		else
			ft_error(id, "Erreur de map, ligne de gauche non valide");
	}
}

void	ft_check_line_right(mlxid *id)
{
	int		i;
	int		y;

	i = ((id->width) / 50) - 1;
	y = 0;
	while (id->map[y] && y < (id->height) / 50)
	{
		if (id->map[y][i] == '1')
			y++;
		else
			ft_error(id, "Erreur de map, ligne de droite non valide");
	}
}
