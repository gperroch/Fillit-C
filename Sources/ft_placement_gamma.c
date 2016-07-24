/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_placement_gamma.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperroch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/28 17:19:26 by gperroch          #+#    #+#             */
/*   Updated: 2016/01/15 00:03:01 by gperroch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/fillit.h"

int			ft_placement_gamma(char letter, char **map)
{
	int		i;
	int		j;

	i = 0;
	while (i < 26)
	{
		j = 0;
		while (j < 26)
		{
			if (map[i][j] == letter)
				map[i][j] = '.';
			j++;
		}
		i++;
	}
	return (0);
}
