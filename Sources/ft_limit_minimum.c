/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_limit_minimum.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperroch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/28 10:41:27 by gperroch          #+#    #+#             */
/*   Updated: 2015/12/30 14:44:47 by gperroch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"

int						ft_limit_minimum(t_list_tetriminos *list)
{
	double				resultat;
	t_list_tetriminos	*tmp;

	tmp = list;
	while (tmp->next)
		tmp = tmp->next;
	resultat = 2 * ft_sqrt(tmp->number);
	if (resultat > (double)((int)resultat))
		resultat++;
	return (resultat);
}
