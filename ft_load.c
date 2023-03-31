/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_load.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 16:08:58 by besalort          #+#    #+#             */
/*   Updated: 2023/03/31 17:04:38 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"so_long.h"

int	ft_count_height(mlxid *id)
{
	int		i;

	i = 0;
	while (id->map[i] && id->map[i][0] == '1')
		i++;
	return (i * 50);
}

int	ft_count_width(mlxid *id)
{
	int		i;

	i = 0;
	while (id->map[0][i] == '1' && id->map[0][i])
		i++;
	return (i * 50);
}

void	ft_maptransform(mlxid *id, char *name)
{
	char		*map;
	char		*tmp;
	char		*line;	
	const int	fd = open(name, O_RDONLY);

	if (fd < 0)
		ft_error(id, "Error, invalid file\n");
	map = ft_calloc(1, 1);
	if (!map)
		return (free(map), ft_error(id, "Error map\n"));
	while (1)
	{
		line = get_next_line(fd);
		if (!line)
			break ;
		tmp = ft_strjoin(map, line);
		free(map);
		map = tmp;
		free(line);
	}
	id->map = ft_split(map, '\n');
	if (id->map[0] == NULL)
		return (free(line), free(map), ft_error(id, "Error, invalid name\n"));
	return (free(line), free(map));
}

void	ft_load_values(mlxid *id, char *name)
{
	ft_maptransform(id, name);
	id->width = ft_count_width(id);
	id->height = ft_count_height(id);
}

void	ft_load_img(mlxid *id)
{
	ft_trappeload(id);
	ft_keyload(id);
	ft_animalload(id);
	ft_wallload(id);
	ft_groundload(id);
}
