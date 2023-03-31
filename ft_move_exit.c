/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_exit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 17:43:05 by besalort          #+#    #+#             */
/*   Updated: 2023/03/31 18:52:43 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_move_right_exit(mlxid *id, t_pos i)
{
	if (i.x < (id->width / 50) - 1)
	{
		id->map[i.y][i.x + 1] = 'T';
		if (id->map[i.y][i.x] == 'P')
			id->map[i.y][i.x] = '0';
		else
			id->map[i.y][i.x] = 'E';
	}
	id->inputs++;
	ft_putnbr_fd (id->inputs, 1);
	ft_putchar_fd ('\n', 1);
}

void	ft_move_left_exit(mlxid *id, t_pos i)
{
	if (i.x < (id->width / 50) - 1)
	{
		id->map[i.y][i.x - 1] = 'T';
		if (id->map[i.y][i.x] == 'P')
			id->map[i.y][i.x] = '0';
		else
			id->map[i.y][i.x] = 'E';
	}
	id->inputs++;
	ft_putnbr_fd (id->inputs, 1);
	ft_putchar_fd ('\n', 1);
}

void	ft_move_up_exit(mlxid *id, t_pos i)
{
	if (i.x < (id->width / 50) - 1)
	{
		id->map[i.y - 1][i.x] = 'T';
		if (id->map[i.y][i.x] == 'P')
			id->map[i.y][i.x] = '0';
		else
			id->map[i.y][i.x] = 'E';
	}
	id->inputs++;
	ft_putnbr_fd (id->inputs, 1);
	ft_putchar_fd ('\n', 1);
}

void	ft_move_down_exit(mlxid *id, t_pos i)
{
	if (i.x < (id->width / 50) - 1)
	{
		id->map[i.y + 1][i.x] = 'T';
		if (id->map[i.y][i.x] == 'P')
			id->map[i.y][i.x] = '0';
		else
			id->map[i.y][i.x] = 'E';
	}
	id->inputs++;
	ft_putnbr_fd (id->inputs, 1);
	ft_putchar_fd ('\n', 1);
}