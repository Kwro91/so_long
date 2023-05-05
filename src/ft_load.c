/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_load.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 16:08:58 by besalort          #+#    #+#             */
/*   Updated: 2023/05/05 14:50:58 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"so_long.h"

int	ft_count_height(t_data *id)
{
	int		i;

	i = 0;
	while (id->map[i] && id->map[i][0] == '1')
		i++;
	return (i * 50);
}

int	ft_count_width(t_data *id)
{
	int		i;

	i = 0;
	while (id->map[0][i] == '1' && id->map[0][i])
		i++;
	return (i * 50);
}

void	ft_maptransform(t_data *id, char *name)
{
	char		*map;
	char		*tmp;
	char		*line;	
	const int	fd = open(name, O_RDONLY);

	if (fd < 0)
		ft_error(id, "Error, invalid file\n");
	map = ft_calloc(1, 1);
	if (!map)
		return (close(fd), free(map), ft_error(id, "Error map\n"));
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
		return (free(line), free(map), close(fd),
			ft_error(id, "Error, invalid name\n"));
	return (close(fd), free(line), free(map));
}

void	ft_load_values(t_data *id, char *name)
{
	ft_maptransform(id, name);
	id->width = ft_count_width(id);
	id->height = ft_count_height(id);
}

void	ft_load_img(t_data *id)
{
	ft_trappe_playerload(id);
	ft_trappeload(id);
	ft_keyload(id);
	ft_animalload(id);
	ft_wallload(id);
	ft_groundload(id);
}
