/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reader.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperroch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/28 10:49:40 by gperroch          #+#    #+#             */
/*   Updated: 2015/12/28 10:49:44 by gperroch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_reader(int fd, char *buf, int count)
{
	int bytes_read;

	if ((bytes_read = read(fd, buf, count)) == -1)
		return (-1);
	buf[bytes_read] = '\0';
	return (bytes_read);
}
