/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_placement_alpha.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperroch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/28 15:07:00 by gperroch          #+#    #+#             */
/*   Updated: 2016/01/28 17:23:33 by gperroch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/fillit.h"

int			ft_placement_alpha(t_list_tetriminos *piece, char **map,
		int x, int y)
{
	int		i;
	int		j;

	i = 0;
	while ((piece->lens)[i] > 0)
	{
		j = 0;
		while (j < (int)(piece->lens)[i])
		{
			if (map[y + i][x + (int)(piece->starts)[i] + j] == '.')
				map[y + i][x + (int)(piece->starts)[i] + j] = piece->letter;
			else
				return (-1);
			j++;
		}
		i++;
	}
	return (1);
}
