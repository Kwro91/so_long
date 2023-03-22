/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:07:43 by besalort          #+#    #+#             */
/*   Updated: 2023/03/22 16:31:08 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_move_up(mlxid *id, int key)
{
	t_pos	i;

	i = ft_where(id);
	if (key == 119 && ft_check_up(id, key))
	{
		if (i.y > 0)
		{
			id->map[i.y - 1][i.x] = 'P';
			id->map[i.y][i.x] = '0';
		}
		id->inputs++;
		ft_putnbr_fd (id->inputs, 1);
		ft_putchar_fd ('\n', 1);
	}
}

void	ft_move_down(mlxid *id, int key)
{
	t_pos	i;

	i = ft_where(id);
	if (key == 115 && ft_check_down(id, key))
	{
		if (i.y < (id->height / 50) - 1)
		{
			id->map[i.y + 1][i.x] = 'P';
			id->map[i.y][i.x] = '0';
		}
		id->inputs++;
		ft_putnbr_fd (id->inputs, 1);
		ft_putchar_fd ('\n', 1);
	}
}

void	ft_move_right(mlxid *id, int key)
{
	t_pos	i;

	i = ft_where(id);
	if (key == 100 && ft_check_right(id, key))
	{
		if (i.x < (id->width / 50) - 1)
		{
			id->map[i.y][i.x + 1] = 'P';
			id->map[i.y][i.x] = '0';
		}
		id->inputs++;
		ft_putnbr_fd (id->inputs, 1);
		ft_putchar_fd ('\n', 1);
	}
}

void	ft_move_left(mlxid *id, int key)
{
	t_pos	i;

	i = ft_where(id);
	if (key == 97 && ft_check_left(id, key))
	{
		if (i.x > 0)
		{
			id->map[i.y][i.x - 1] = 'P';
			id->map[i.y][i.x] = '0';
		}
		id->inputs++;
		ft_putnbr_fd (id->inputs, 1);
		ft_putchar_fd ('\n', 1);
	}
}
