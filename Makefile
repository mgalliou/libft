# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgalliou <mgalliou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/05 14:47:57 by mgalliou          #+#    #+#              #
#    Updated: 2020/03/07 09:44:45 by mgalliou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	libft.a
INC_DIR			=	include
SRC_DIR			=	src
OBJ_DIR			=	obj
CC				=	gcc
CFLAGS			=	-Wall -Wextra -Werror
CPPFLAGS		=	-I$(INC_DIR)
ARFLAGS			=	rcs
RM				= 	rm -rf

INC_NAME		=	libft.h
INC				=	$(addprefix $(INC_DIR)/, $(INC_NAME))
INC				+=	$(SRC_DIR)/$(SRC_PTF_DIR)/ft_printf.h\
					$(SRC_DIR)/$(SRC_GNL_DIR)/get_next_line.h

SRC_NAME		=	\
					btree_apply_by_level.c\
					btree_apply_infix.c\
					btree_apply_infix_rev.c\
					btree_apply_prefix.c\
					btree_apply_suffix.c\
					btree_create_node.c\
					btree_insert_data.c\
					btree_level_count.c\
					btree_search_item.c\
					ft_atoi.c\
					ft_atoi_base.c\
					ft_bzero.c\
					ft_dlstaddback.c\
					ft_dlstinsert.c\
					ft_dlstnew.c\
					ft_dlstnewnocpy.c\
					ft_dlstremove.c\
					ft_getenv.c\
					ft_getcol.c\
					ft_ftoa.c\
					ft_isalnum.c\
					ft_isalpha.c\
					ft_isascii.c\
					ft_isblank.c\
					ft_isdigit.c\
					ft_isdir.c\
					ft_isescape.c\
					ft_isprint.c\
					ft_isspace.c\
					ft_itoa.c\
					ft_itoa_base.c\
					ft_lstadd.c\
					ft_lstaddback.c\
					ft_lstdel.c\
					ft_lstdelone.c\
					ft_lstiter.c\
					ft_lstlen.c\
					ft_lstmap.c\
					ft_lstnew.c\
					ft_lstnewnocpy.c\
					ft_lstsort.c\
					ft_memalloc.c\
					ft_memccpy.c\
					ft_memchr.c\
					ft_memcmp.c\
					ft_memcpy.c\
					ft_memdel.c\
					ft_memmove.c\
					ft_memset.c\
					ft_nbrlen.c\
					ft_nbrlen_base.c\
					ft_ptr_align.c\
					ft_putchar.c\
					ft_putchar_fd.c\
					ft_putendl.c\
					ft_putendl_fd.c\
					ft_putenv.c\
					ft_putnbr.c\
					ft_putnbr_base.c\
					ft_putnbr_fd.c\
					ft_putstr.c\
					ft_putstr_fd.c\
					ft_puttab.c\
					ft_puttab_fd.c\
					ft_memrealloc.c\
					ft_recursive_power.c\
					ft_strcapitalize.c\
					ft_setenv.c\
					ft_strcat.c\
					ft_strchr.c\
					ft_strclr.c\
					ft_strcjoin.c\
					ft_strcmp.c\
					ft_strcpy.c\
					ft_strdel.c\
					ft_strdup.c\
					ft_strequ.c\
					ft_striter.c\
					ft_striteri.c\
					ft_strjoin.c\
					ft_strlcat.c\
					ft_strlcpy.c\
					ft_strclen.c\
					ft_strlen.c\
					ft_strlowcase.c\
					ft_strmap.c\
					ft_strmapi.c\
					ft_strncat.c\
					ft_strncmp.c\
					ft_strncpy.c\
					ft_strndup.c\
					ft_strnequ.c\
					ft_strnew.c\
					ft_strnstr.c\
					ft_strrealloc.c\
					ft_strrchr.c\
					ft_strrev.c\
					ft_strsplit.c\
					ft_strstr.c\
					ft_strsub.c\
					ft_strtrim.c\
					ft_strupcase.c\
					ft_swap.c\
					ft_tabdel.c\
					ft_tabdup.c\
					ft_tablen.c\
					ft_tolower.c\
					ft_toupper.c\
					ft_unsetenv.c\
					ft_wcharlen.c\
					ft_wchartoa.c\
					ft_wordcount.c\
					ft_wstrlen.c\
					ft_wstrtoa.c\
					rb_delete.c\
					rb_insert.c\
					rb_remove.c

SRC_GNL_DIR		=	get_next_line
SRC_GNL_NAME	=	get_next_line.c

SRC_PTF_DIR		=	ft_printf
SRC_PTF_NAME	=	\
					buffering.c\
					chars_to_str.c\
					conv_to_buffer.c\
					float_to_str.c\
					ft_printf.c\
					get_conv.c\
					get_id.c\
					goto_arg.c\
					init.c\
					nbr_to_str.c\
					normal_to_buffer.c\
					putconv_to_buffer.c\
					set_apostrophe.c\
					set_precision.c\
					toolkit.c

SRC_NAME		+=	$(addprefix $(SRC_GNL_DIR)/, $(SRC_GNL_NAME))\
				    $(addprefix $(SRC_PTF_DIR)/, $(SRC_PTF_NAME))
SRC				=	$(addprefix $(SRC_DIR)/,$(SRC_NAME))

OBJ_NAME		=	$(SRC_NAME:.c=.o)
OBJ				=	$(addprefix $(OBJ_DIR)/,$(OBJ_NAME))

all: $(NAME)

$(NAME): $(OBJ) $(SRC)
	$(AR) $(ARFLAGS) $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(INC)
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $@

check:
	$(MAKE) -C test
	./test/test

clean:
	$(RM) $(OBJ_DIR)
	$(MAKE) clean -C test

fclean: clean
	$(RM) $(NAME)
	$(MAKE) fclean -C test


norminette:
	$@ $(SRC_DIR) $(INC)

re: fclean all

.PHONY: all check clean fclean re norminette
