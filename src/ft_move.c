/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:07:43 by besalort          #+#    #+#             */
/*   Updated: 2023/05/04 17:18:22 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_move_up(t_data *id, int key)
{
	t_pos	i;

	i = ft_where(id);
	if (key == 119 && ft_check_up(id, key) == 1)
	{
		if (i.y > 0)
		{
			id->map[i.y - 1][i.x] = 'P';
			if (id->map[i.y][i.x] == 'P')
				id->map[i.y][i.x] = '0';
			else
				id->map[i.y][i.x] = 'E';
		}
		id->inputs++;
		ft_putnbr_fd (id->inputs, 1);
		ft_putchar_fd ('\n', 1);
	}
	else if (key == 119 && ft_check_up(id, key) == -1)
		ft_move_up_exit(id, i);
}

void	ft_move_down(t_data *id, int key)
{
	t_pos	i;

	i = ft_where(id);
	if (key == 115 && ft_check_down(id, key) == 1)
	{
		if (i.y < (id->height / 50) - 1)
		{
			id->map[i.y + 1][i.x] = 'P';
			if (id->map[i.y][i.x] == 'P')
				id->map[i.y][i.x] = '0';
			else
				id->map[i.y][i.x] = 'E';
		}
		id->inputs++;
		ft_putnbr_fd (id->inputs, 1);
		ft_putchar_fd ('\n', 1);
	}
	else if (key == 115 && ft_check_down(id, key) == -1)
		ft_move_down_exit(id, i);
}

void	ft_move_right(t_data *id, int key)
{
	t_pos	i;

	i = ft_where(id);
	if (key == 100 && ft_check_right(id, key) == 1)
	{
		if (i.x < (id->width / 50) - 1)
		{
			id->map[i.y][i.x + 1] = 'P';
			if (id->map[i.y][i.x] == 'P')
				id->map[i.y][i.x] = '0';
			else
				id->map[i.y][i.x] = 'E';
		}
		id->inputs++;
		ft_putnbr_fd (id->inputs, 1);
		ft_putchar_fd ('\n', 1);
	}
	else if (key == 100 && ft_check_right(id, key) == -1)
		ft_move_right_exit(id, i);
}

void	ft_move_left(t_data *id, int key)
{
	t_pos	i;

	i = ft_where(id);
	if (key == 97 && ft_check_left(id, key) == 1)
	{
		if (i.x > 0)
		{
			id->map[i.y][i.x - 1] = 'P';
			if (id->map[i.y][i.x] == 'P')
				id->map[i.y][i.x] = '0';
			else
				id->map[i.y][i.x] = 'E';
		}
		id->inputs++;
		ft_putnbr_fd (id->inputs, 1);
		ft_putchar_fd ('\n', 1);
	}
	else if (key == 97 && ft_check_left(id, key) == -1)
		ft_move_left_exit(id, i);
}
