/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reading_check.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperroch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/28 10:47:15 by gperroch          #+#    #+#             */
/*   Updated: 2016/01/28 18:28:49 by gperroch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	ft_contact(char *buf, int i)
{
	int		contact;

	contact = 0;
	if (i > 4 && buf[i - 5] == '#')
		contact++;
	if (i > 0 && buf[i - 1] == '#')
		contact++;
	if (i < 19 && buf[i + 1] == '#')
		contact++;
	if (i < 14 && buf[i + 5] == '#')
		contact++;
	return (contact);
}

static int	ft_annexe(char *buf, int bytes_read, int diese, int n)
{
	if ((bytes_read != 21 && bytes_read != 20) || buf[4] != '\n' ||
			buf[9] != '\n' || buf[14] != '\n' || buf[19] != '\n' ||
			(bytes_read == 21 && buf[20] != '\n'))
		return (-1);
	if (diese != 4 || (bytes_read == 20 && n > 4) ||
			(bytes_read == 21 && n > 5))
		return (-1);
	return (0);
}

int			ft_reading_check(char *buf, int bytes_read)
{
	int		i;
	int		diese;
	int		n;
	int		contact;

	i = -1;
	diese = 0;
	n = 0;
	contact = 0;
	while (buf[++i] != '\0')
	{
		if (buf[i] == '#')
			diese++;
		if (buf[i] == '#')
			contact = contact + ft_contact(buf, i);
		if (buf[i] == '\n')
			n++;
		if (ft_check_char(buf, i) == -1)
			return (-1);
	}
	if ((ft_annexe(buf, bytes_read, diese, n) == -1)
			|| (contact != 6 && contact != 8))
		return (-1);
	return (0);
}
