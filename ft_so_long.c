/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_so_long.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 15:52:11 by besalort          #+#    #+#             */
/*   Updated: 2023/03/21 18:42:51 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	so_long(char *name)
{
	mlxid	id;
	
	id = (mlxid){};
	ft_check_name(name);
	ft_load_values(&id, name);
	if (ft_check(&id) == 0)
		ft_error(&id, "Erreur, veuillez rentrer des parametres valides");
	id.mlx = mlx_init();
	if (!id.mlx)
		ft_error(&id, "Erreur lors du chargement de la minilibx");
	id.win = mlx_new_window(id.mlx, id.width, id.height, "so_long");
	if (!id.win)
		ft_error(&id, "Erreur lors du chargement de la fenetre mlx");
	ft_load_img(&id);
	ft_drawmap(&id);
	mlx_key_hook(id.win, ft_key_pressed, &id);
	mlx_hook(id.win, ON_DESTROY, 0, ft_exit, &id);
	mlx_loop(id.mlx);
}

int	main(int ac, char **av)
{
	if (ac != 2)
		return (ft_putstr_fd("Inserez un seul nom de fichier de map", 1),0);
	so_long(av[1]);
	return (0);
}
