/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_so_long.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 15:52:11 by besalort          #+#    #+#             */
/*   Updated: 2023/05/04 17:18:22 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	so_long(char *name)
{
	t_data	id;

	id = (t_data){};
	ft_check_name(&id, name);
	ft_load_values(&id, name);
	ft_check(&id);
	id.mlx = mlx_init();
	if (!id.mlx)
		ft_error(&id, "Error loading mlx\n");
	id.win = mlx_new_window(id.mlx, id.width, id.height, "so_long\n");
	if (!id.win)
		ft_error(&id, "Error loading mlx window\n");
	ft_load_img(&id);
	ft_drawmap(&id);
	mlx_key_hook(id.win, ft_key_pressed, &id);
	mlx_hook(id.win, ON_DESTROY, 0, ft_exit, &id);
	mlx_loop(id.mlx);
}

int	main(int ac, char **av)
{
	if (ac != 2)
		return (ft_putstr_fd("Error, put only one name of map\n", 1), 0);
	so_long(av[1]);
	return (0);
}
