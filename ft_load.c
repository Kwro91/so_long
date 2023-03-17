/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_load.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 16:08:58 by besalort          #+#    #+#             */
/*   Updated: 2023/03/17 18:08:31 by besalort         ###   ########.fr       */
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
	char		*line;	
	const int	fd = open(name, O_RDONLY);

	if (fd < 0)
		ft_error_name();
	map = ft_strdup("");
	if (!map)
		ft_error_map();
	while(1)
	{
		line = get_next_line(fd);
		if (!line)
			break ;
		map = ft_strjoin(map, line);
		free(line);
	}
	id->map = ft_split(map, '\n');
	if (id->map[0] == NULL)
		return(free(line), free(map), ft_error_map());
	return (free(line), free(map));
}

void	ft_load_values(mlxid *id, char *name)
{
	ft_maptransform(id, name);
	id->width = ft_count_width(id);
	id->height = ft_count_height(id);
	id->inputs = 0;
	id->info.key = 0;
	id->info.plr = 0;
	id->info.trp = 0;
}

void	ft_load_img(mlxid *id)
{
	trappeload(id);
	keyload(id);
	animalload(id);
	wallload(id);
	groundload(id);
}
