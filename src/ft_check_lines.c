/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_lines.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 17:59:09 by besalort          #+#    #+#             */
/*   Updated: 2023/05/04 17:18:22 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_check_line_up(t_data *id)
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
			ft_error(id, "Error map, invalid upper line\n");
	}
}

void	ft_check_line_down(t_data *id)
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
			ft_error(id, "Error map, invalid down line\n");
	}
}

void	ft_check_line_left(t_data *id)
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
			ft_error(id, "Error map, invalid left line\n");
	}
}

void	ft_check_line_right(t_data *id)
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
			ft_error(id, "Error map, invalid right line\n");
	}
}
