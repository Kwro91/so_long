/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mapcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 18:29:39 by besalort          #+#    #+#             */
/*   Updated: 2023/03/22 19:32:52 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_linecpy(mlxid *id, int y)
{
	int		i;

	i = 0;
	while (id->map[y][i])
		i++;
	id->mapcpy[y] = malloc(i + 1);
	id->mapcpy[y] = ft_strcpy(id->mapcpy[y], id->map[y]);
	id->mapcpy[y][i] = '\0';
}

void	ft_mapcpy(mlxid *id)
{
	int		count;

	count = 0;
	while (id->map[count])
	{
		count++;
	}
	id->mapcpy = malloc(sizeof(char *) * count + 1);
	count = 0;
	while (id->map[count])
	{
		ft_linecpy(id, count);
		count++;
	}
	id->mapcpy[count] = NULL;
}