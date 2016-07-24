# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gperroch <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/28 11:14:25 by gperroch          #+#    #+#              #
#    Updated: 2015/12/28 14:28:18 by gperroch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

SRC_PATH = ./

OBJ_PATH = ./

LIB_PATH = ./

INC_PATH = ./

SRC_NAMES =	ft_isprint.c \
			ft_memdel.c	\
	  		ft_putnbr_fd.c \
	   		ft_strdel.c	\
	   		ft_strmapi.c \
   	  		ft_strstr.c \
	 		ft_atoi.c \
	   		ft_itoa.c \
	   		ft_memmove.c \
   	   		ft_putstr.c \
   	   		ft_strdup.c \
   	   		ft_strncat.c \
   	   		ft_strsub.c \
	   		ft_memset.c \
   	   		ft_putstr_fd.c \
   	   		ft_strequ.c \
   	   		ft_strncmp.c \
   	   		ft_strtrim.c \
	   		ft_bzero.c \
	   		ft_memalloc.c \
   	   		ft_putchar.c \
   	   		ft_strcat.c \
   	   		ft_striter.c \
   	   		ft_strncpy.c \
   	   		ft_tolower.c \
	   		ft_isalnum.c \
   	   		ft_memccpy.c \
   	   		ft_putchar_fd.c \
   	   		ft_strchr.c \
   	   		ft_striteri.c \
   	   		ft_strnequ.c \
   	   		ft_toupper.c \
	   		ft_isalpha.c \
   	   		ft_memchr.c \
   	   		ft_putendl.c \
   	   		ft_strclr.c \
   	   		ft_strlcat.c \
   	   		ft_strnew.c \
	   		ft_isascii.c \
   	   		ft_memcmp.c \
   	   		ft_putendl_fd.c \
   	   		ft_strcmp.c	\
	   		ft_strlen.c	\
	   		ft_strnstr.c \
	   		ft_isdigit.c \
   	   		ft_memcpy.c	\
	   		ft_putnbr.c	\
	   		ft_strcpy.c	\
	   		ft_strmap.c	\
	   		ft_strrchr.c \
			ft_strsplit.c \
			ft_strjoin.c \
			ft_lstiter.c \
			ft_lstnew.c \
			ft_lstdelone.c \
			ft_lstdel.c \
			ft_lstadd.c \
			ft_lstmap.c \
			ft_lstlen.c \
			ft_lstdup.c \
			ft_strlenchr.c \
			ft_strdupchr.c \
			ft_strndup.c \
			ft_sqrt.c

OBJ_NAMES =	$(SRC_NAMES:.c=.o)

INC_NAMES = libft.h

all : $(NAME)

$(NAME) :
	@gcc -c $(CFLAGS) $(SRC_NAMES)
	@ar rc $(NAME) $(OBJ_NAMES)
	@ranlib $(NAME)

clean : 
	@rm -f $(OBJ_NAMES)

fclean : clean
	@rm -f $(NAME)

re : fclean all

norme :
	norminette $(SRC_NAMES)
	norminette $(INC_NAMES)
