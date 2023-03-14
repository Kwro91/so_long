/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_so_long.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 15:52:11 by besalort          #+#    #+#             */
/*   Updated: 2023/03/14 18:19:28 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	so_long()
{
	mlxid	id;
	
	ft_load_values(&id);
	id.mlx = mlx_init();
	id.win = mlx_new_window(id.mlx, id.width, id.height, "so_long");
	ft_load_img(&id);
	if (ft_check(&id) == 0)
		return (ft_putstr_fd("ERROR", 1));
	ft_drawmap(&id);
	mlx_key_hook(id.win, ft_key_pressed, &id);
	mlx_hook(id.win, ON_DESTROY, 0, ft_closewin, &id);
	mlx_loop(id.mlx);
}

int	main(void)
{
	so_long();
}
