/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 16:08:23 by besalort          #+#    #+#             */
/*   Updated: 2023/03/17 17:13:17 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"so_long.h"

void	ft_check_name(char *name)
{
	char	*end;

	if (ft_strlen(name) < 5)
		ft_error_name();
	end = ft_strrchr(name, '/');
	if (end)
		if (ft_strncmp(end, "/.ber", 5) == 0)
			ft_error_name();
	end = ft_strrchr(name, '.');
	if (!end)
		ft_error_name();
	if (ft_strncmp(end, ".ber", 4) != 0)
		ft_error_name();
}

void	ft_check_end(mlxid	*id)
{
	id->info.trp = ft_trp_count(id);
	if (id->info.trp == 0)
	{
		ft_putstr_fd("Vous avez GAGNE !", 1);
		ft_exit(id);
	}
}

int	ft_check(mlxid *id)
{
	if (ft_checkmap(id) == 1)
		return (1);
	return (ft_error_map(), 0);
}
