/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inputs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 15:24:48 by besalort          #+#    #+#             */
/*   Updated: 2023/03/16 17:53:04 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_key_pressed(int key, mlxid *id)
{
	if (key == 65307)
		ft_exit(id);
	else if (key == 119)
		ft_move_up(id, key);
	else if (key == 115)
		ft_move_down(id, key);
	else if (key == 100)
		ft_move_right(id, key);
	else if (key == 97)
		ft_move_left(id, key);
	ft_check_key(id);
	ft_drawmap(id);
	ft_check_end(id);
	return (0);
}