/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 16:17:57 by besalort          #+#    #+#             */
/*   Updated: 2023/05/04 17:18:22 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_is_char_hide(char c)
{
	if (c == '1' || c == '0' || c == '*')
		return (1);
	return (0);
}

void	ft_check_parse_mapcpy(t_data *id)
{
	int	i;
	int	j;

	j = 0;
	while (id->mapcpy[j] && id->mapcpy)
	{
		i = 0;
		while (id->mapcpy[j][i])
		{
			if (ft_is_char_hide(id->mapcpy[j][i]) == 0)
				ft_error(id, "Error, the map is not possible\n");
			i++;
		}
		j++;
	}
}

int	ft_is_replace(t_data *id, int x, int y)
{
	if (id->mapcpy[y][x] == '1')
		return (0);
	return (1);
}

void	ft_pars_direction(t_data *id, int x, int y)
{
	while (id->mapcpy[y][x] != '*')
	{
		id->mapcpy[y][x] = '*';
		if (ft_is_replace(id, x + 1, y))
			ft_pars_direction(id, x + 1, y);
		if (ft_is_replace(id, x - 1, y))
			ft_pars_direction(id, x - 1, y);
		if (ft_is_replace(id, x, y + 1))
			ft_pars_direction(id, x, y + 1);
		if (ft_is_replace(id, x, y - 1))
			ft_pars_direction(id, x, y - 1);
	}
}

void	ft_parsing(t_data *id)
{
	t_pos	pos;

	ft_mapcpy(id);
	pos = ft_where(id);
	ft_pars_direction(id, (int)pos.x, (int)pos.y);
	ft_check_parse_mapcpy(id);
}
