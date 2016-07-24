/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_placement_beta.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperroch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/28 17:58:53 by gperroch          #+#    #+#             */
/*   Updated: 2016/01/28 18:33:15 by gperroch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/fillit.h"

int			ft_placement_beta(char **map, int limit)
{
	int		i;
	int		j;

	j = 0;
	while (j < 26)
	{
		if (j < limit)
			i = limit;
		else
			i = 0;
		while (i < 26)
		{
			if (map[j][i] != '.')
				return (-1);
			i++;
		}
		j++;
	}
	return (1);
}
