/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_save_tetriminos.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperroch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/28 10:50:46 by gperroch          #+#    #+#             */
/*   Updated: 2015/12/30 14:53:09 by gperroch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_list_tetriminos	*ft_save_tetriminos(t_list_tetriminos *lst, char *buf)
{
	char			*starts;
	char			*lens;

	starts = (char*)malloc(sizeof(char) * 4);
	lens = (char*)malloc(sizeof(char) * 4);
	ft_starts(buf, starts);
	ft_lens(buf, lens);
	return (ft_add_piece(ft_new_piece(starts, lens), lst));
}
