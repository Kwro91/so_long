/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 16:05:36 by besalort          #+#    #+#             */
/*   Updated: 2023/03/14 18:34:25 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"so_long.h"

int	ft_checkmap(mlxid *id)
{
	//backtracking
	id->info.key = ft_key_count(id);
	id->info.plr = ft_plr_count(id);
	id->info.trp = ft_trp_count(id);
	return (id->info.key > 0 &&
			id->info.plr == 1 &&
				id->info.trp == 1);
}