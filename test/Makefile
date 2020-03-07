# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgalliou <mgalliou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/06/28 13:13:07 by mgalliou          #+#    #+#              #
#    Updated: 2020/03/07 09:45:05 by mgalliou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	test
TARGET		=	../libft.a
INC_DIR		=	include ../include libftest/include
SRC_DIR		=	src
OBJ_DIR		=	obj
LIB_DIR		=	libftest ..
RM			=	rm -rf
CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror
CFLAGS_DEBUG =	-g -fsanitize=address
CPPFLAGS	=	$(foreach dir,$(INC_DIR),-I$(dir))
LDFLAGS		=	$(foreach dir,$(LIB_DIR),-L$(dir))
LDLIBS		=	-lftest -lft
RM			= 	rm -rf
LIBFTEST	=	libftest/libftest.a
LIB			=	$(addprefix $(LIB_DIR)/,$(LIB_NAME))

ifeq ($(shell uname),Linux)
	CFLAGS += -fPIC
endif

INC			=	$(SRC_DIR)/test.h

SRC_NAME	=	main.c\
				suite_ft_dlstaddback.c\
				suite_ft_dlstnew.c\
				suite_ft_lstlen.c\
				suite_ft_strchr.c\
				suite_ft_dlstinsert.c\
				suite_ft_atoi_base.c
SRC			=	$(addprefix $(SRC_DIR)/,$(SRC_NAME))

OBJ_NAME	=	$(SRC_NAME:.c=.o)
OBJ			=	$(addprefix $(OBJ_DIR)/,$(OBJ_NAME))

all : $(NAME)

debug: CFLAGS += $(CFLAGS_DEBUG)
debug: all

$(NAME): $(OBJ) | $(LIBFTEST) $(TARGET)
	$(CC) $(CFLAGS) $(CPPFLAGS) $(LDFLAGS) -o $@ $(OBJ) $(LDLIBS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(INC)
	@mkdir -p $(dir $@)
	$(CC) $(CPPFLAGS) $(CFLAGS) -c $< -o $@

$(LIBFTEST):
	$(MAKE) -C libftest CFLAGS="$(CFLAGS)"

$(TARGET):
	$(MAKE) -C ../ CFLAGS="$(CFLAGS)"

clean:
	$(RM) $(OBJ_DIR)
	$(MAKE) clean -C libftest

fclean: clean
	$(RM) $(NAME)
	$(MAKE) fclean -C libftest

re: fclean all

.PHONY: all debug clean fclean re
