/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperroch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 09:01:58 by gperroch          #+#    #+#             */
/*   Updated: 2015/12/14 09:24:32 by gperroch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void	*tmp;
	int		i;

	i = 0;
	if (!(tmp = (void*)malloc(sizeof(void) * size)))
		return (0);
	ft_bzero(tmp, size);
	return (tmp);
}
