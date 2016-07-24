/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_piece.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperroch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/28 10:54:10 by gperroch          #+#    #+#             */
/*   Updated: 2016/01/28 17:52:49 by gperroch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_list_tetriminos		*ft_new_piece(char *starts, char *lens)
{
	t_list_tetriminos	*newpiece;
	int					*last_position;

	if (!(newpiece = (t_list_tetriminos*)malloc(sizeof(t_list_tetriminos)))
			|| !(last_position = (int*)malloc(sizeof(int) * 2)))
		return (NULL);
	last_position[0] = -1;
	last_position[1] = -1;
	newpiece->starts = starts;
	newpiece->lens = lens;
	newpiece->next = NULL;
	newpiece->last_position = last_position;
	newpiece->last_position[0] = -1;
	newpiece->last_position[1] = 0;
	return (newpiece);
}
