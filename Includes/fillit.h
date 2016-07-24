/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperroch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 15:14:12 by gperroch          #+#    #+#             */
/*   Updated: 2016/01/28 19:26:47 by gperroch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H

# define FILLIT_H
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct					s_list_tetriminos
{
	char						*starts;
	char						*lens;
	int							number;
	char						letter;
	struct s_list_tetriminos	*next;
	struct s_list_tetriminos	*previous;
	int							*last_position;
}								t_list_tetriminos;

t_list_tetriminos				*ft_add_piece(t_list_tetriminos *newpiece,
		t_list_tetriminos *lst);
int								ft_check_char(char *buf, int i);
void							ft_display(int limit, char **map);
void							ft_lens(char *buf, char *lens);
int								ft_limit_minimum(t_list_tetriminos *list);
char							**ft_map_creator(char **map);
void							ft_nettoyage(char **map);
t_list_tetriminos				*ft_new_piece(char *starts, char *lens);
int								ft_part_one(char *argv_1,
		t_list_tetriminos **lst);
int								ft_part_three(t_list_tetriminos *list,
		char **map);
int								ft_placement(t_list_tetriminos *list,
		char **map, int limit);
int								ft_placement_alpha(
		t_list_tetriminos *current_piece, char **map, int i, int j);
int								ft_placement_beta(char **map, int limit);
int								ft_placement_gamma(char letter, char **map);
int								ft_reader(int fd, char *buf, int count);
int								ft_reading_check(char *buf, int bytes_read);
t_list_tetriminos				*ft_save_tetriminos(t_list_tetriminos *lst,
		char *buf);
void							ft_starts(char *buf, char *starts);

#endif
