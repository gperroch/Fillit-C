/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_placement.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperroch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/28 10:44:11 by gperroch          #+#    #+#             */
/*   Updated: 2016/01/28 19:25:44 by gperroch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"
#define I coor[0]
#define J coor[1]

static int				ft_auxiliaire(t_list_tetriminos *current, char **map,
		int coor[2], int limit)
{
	int					ret_de_test_tempo;

	ret_de_test_tempo = ft_placement_alpha(current, map, I, J);
	if (ret_de_test_tempo == -1
			|| ft_placement_beta(map, limit) == -1)
		ft_placement_gamma(current->letter, map);
	else
	{
		current->last_position[0] = I;
		current->last_position[1] = J;
		return (1);
	}
	return (0);
}

int						ft_placement(t_list_tetriminos *current, char **map,
		int limit)
{
	int					coor[2];

	I = current->last_position[0] - 1;
	J = current->last_position[1] - 1;
	if (I < limit - 1)
		I++;
	else
	{
		I = -1;
		J++;
	}
	while (++J < limit)
	{
		while (++I < limit)
		{
			if (map[J][I] == '.')
			{
				if (ft_auxiliaire(current, map, coor, limit) == 1)
					return (1);
			}
		}
		I = -1;
	}
	return (-1);
}
