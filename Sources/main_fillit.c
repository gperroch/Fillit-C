/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_fillit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperroch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 10:55:35 by gperroch          #+#    #+#             */
/*   Updated: 2016/01/28 19:11:39 by gperroch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/fillit.h"
#include "../Includes/libft.h"
#include <stdio.h>

int						main(int argc, char **argv)
{
	t_list_tetriminos	**lst;
	char				**map;

	map = NULL;
	if (!(lst = (t_list_tetriminos**)malloc(sizeof(t_list_tetriminos*))))
		return (0);
	if (argc != 2 || ft_part_one(argv[1], lst) == -1)
	{
		write(1, "error\n", 6);
		return (0);
	}
	map = ft_map_creator(map);
	while ((*lst)->previous)
		*lst = (*lst)->previous;
	ft_display(ft_part_three(*lst, map), map);
	return (0);
}

int						ft_part_one(char *argv_1, t_list_tetriminos **lst)
{
	int					bytes_read;
	char				*buf;
	int					fd;
	int					last_bytes_read;

	bytes_read = 21;
	*lst = NULL;
	if ((fd = open(argv_1, O_RDONLY, S_IWUSR)) == -1 ||
			!(buf = (char*)malloc(sizeof(char) * 22)))
		return (-1);
	while (bytes_read == 21 || bytes_read == 20)
	{
		last_bytes_read = bytes_read;
		if (((bytes_read = ft_reader(fd, buf, 21)) == -1))
			return (-1);
		if (bytes_read != 0)
		{
			if (ft_reading_check(buf, bytes_read) == -1)
				return (-1);
			*lst = ft_save_tetriminos(*lst, buf);
		}
	}
	if (last_bytes_read != 20)
		return (-1);
	return (0);
}

char					**ft_map_creator(char **map)
{
	int					i;

	i = 0;
	if (!(map = (char**)malloc(sizeof(char*) * 26)))
		return (NULL);
	while (i < 26)
	{
		if (!(map[i] = (char*)malloc(sizeof(char) * 26)))
			return (NULL);
		map[i] = ft_memset((void*)map[i], 46, 26);
		i++;
	}
	return (map);
}

int						ft_part_three(t_list_tetriminos *list, char **map)
{
	int					limit;
	int					ret_placement;

	ret_placement = 0;
	limit = ft_limit_minimum(list);
	while (list)
	{
		if ((ret_placement = ft_placement(list, map, limit)) == 1)
			list = list->next;
		else if (ret_placement == -1)
		{
			ft_placement_gamma(list->letter, map);
			list->last_position[0] = -1;
			list->last_position[1] = 0;
		}
		if (ret_placement == -1 && list->previous)
		{
			list = list->previous;
			ft_placement_gamma(list->letter, map);
		}
		else if (ret_placement == -1 && !list->previous)
			limit++;
	}
	return (limit);
}

void					ft_display(int limit, char **map)
{
	int					i;
	int					j;

	j = 0;
	while (j < limit)
	{
		i = 0;
		while (i < limit)
		{
			write(1, &map[j][i], 1);
			i++;
		}
		write(1, "\n", 1);
		j++;
	}
}
