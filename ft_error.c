/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 15:12:04 by besalort          #+#    #+#             */
/*   Updated: 2023/03/22 16:28:37 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

	//on peux define des char * de msg d'erreur pour les utiliser ici
	//il faut tout free ici
void	ft_error(mlxid *id, char *error)
{
	ft_putstr_fd(error, 1);
	ft_exit(id);
}
