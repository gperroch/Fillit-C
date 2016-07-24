/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_piece.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperroch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/28 10:55:03 by gperroch          #+#    #+#             */
/*   Updated: 2015/12/30 11:35:17 by gperroch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_list_tetriminos	*ft_add_piece(t_list_tetriminos *newpiece,
		t_list_tetriminos *lst)
{
	if (lst == NULL)
	{
		newpiece->number = 1;
		newpiece->previous = NULL;
		newpiece->letter = 'A';
		return (newpiece);
	}
	else
	{
		lst->next = newpiece;
		newpiece->previous = lst;
		newpiece->number = lst->number + 1;
		newpiece->letter = lst->letter + 1;
		return (newpiece);
	}
}
