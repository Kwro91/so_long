/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 15:12:04 by besalort          #+#    #+#             */
/*   Updated: 2023/03/17 18:27:52 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_error_name(void)
{
	ft_putstr_fd("Le nom de map est invalide", 1);
		exit(0);
}

void	ft_error_map()
{
	ft_putstr_fd("Veuillez selectionner une map valide", 1);
		exit(0);
}

void	ft_error(mlxid *id, char *error)
{
	//on peux define des char * de msg d'erreur pour les utiliser ici
	//il faut tout free ici
	ft_putstr_fd(error, 1);
	ft_exit(id);
}