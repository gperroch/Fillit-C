/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_starts.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperroch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/28 10:52:51 by gperroch          #+#    #+#             */
/*   Updated: 2016/01/08 10:36:15 by gperroch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			ft_starts_annexe(char *buf, char *starts, int i, int position)
{
	int		ligne;

	ligne = 0;
	while (++i < 20)
	{
		if (buf[i] == '\n')
		{
			position = 0;
			ligne++;
			i++;
		}
		if (buf[i] == '#' && buf[i - 1] != '#')
			starts[ligne] = position - starts[0];
		position++;
	}
	return (20);
}

void		ft_starts(char *buf, char *starts)
{
	int		i;
	int		position;

	i = -1;
	position = 0;
	while (++i < 20)
	{
		if (buf[i] == '\n')
			position = 0;
		else if (buf[i] == '#')
		{
			starts[0] = position++;
			i = ft_starts_annexe(buf, starts, i, position);
		}
		else
			position++;
	}
	starts[0] = 0;
}
