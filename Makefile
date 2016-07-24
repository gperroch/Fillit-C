# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gperroch <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/02 16:16:50 by gperroch          #+#    #+#              #
#    Updated: 2016/01/28 18:54:36 by gperroch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	fillit

SRC_PATH	=	Sources
OBJ_PATH	=	.

SRC_NAMES	=	main_fillit.c			\
				ft_add_piece.c		\
				ft_check_char.c		\
				ft_limit_minimum.c	\
				ft_new_piece.c		\
				ft_placement.c		\
				ft_placement_beta.c	\
				ft_reader.c		\
				ft_lens.c		\
				ft_nettoyage.c		\
				ft_placement_alpha.c	\
				ft_placement_gamma.c	\
				ft_reading_check.c	\
				ft_save_tetriminos.c	\
				ft_starts.c
OBJ_NAMES	=	$(SRC_NAMES:.c=.o)

SRC			=	$(addprefix $(SRC_PATH)/,$(SRC_NAMES))
OBJ			=	$(addprefix $(OBJ_PATH)/,$(OBJ_NAMES))

################################################################################

FLAGS		=	-Wall -Wextra -Werror
CPPFLAGS	=	-IIncludes
LDFLAGS		=	-LLibft
LDLIBS		=	-lft

################################################################################

all			:	$(NAME)

$(NAME)		:
	@gcc $(FLAGS) $(CPPFLAGS) -c $(SRC)
	@gcc $(FLAGS) $(LDFLAGS) $(LDLIBS) $(OBJ) -o $@

clean		:
	@rm -f $(OBJ)

fclean		:	clean
	@rm -f fillit

re			:	fclean all
