# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgalliou <mgalliou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/06/28 13:13:07 by mgalliou          #+#    #+#              #
#    Updated: 2019/05/09 21:59:37 by mgalliou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
#    COLOR CODES                                                               #
# **************************************************************************** #

ESC			=	\033
CBLACK		=	$(ESC)[30;1m
CRED		=	$(ESC)[31;1m
CGREEN		=	$(ESC)[32;1m
CYELLOW		=	$(ESC)[33;1m
CBLUE		=	$(ESC)[34;1m
CMAGENTA	=	$(ESC)[35;1m
CCYAN		=	$(ESC)[36;1m
CWHITE		=	$(ESC)[37;1m
CRESET		=	$(ESC)[m

# **************************************************************************** #

# **************************************************************************** #
#	NAME / UTILITY / FLAGS / LIBS
# **************************************************************************** #

NAME		=	test
PROJECT		=	libft.a
INC_DIR		=	include ../include libftest/include
SRC_DIR		=	src
OBJ_DIR		=	obj
LIB_DIR		=	libftest ..
RM			= 	rm -rf
CC			=	gcc
CFLAGS		=	#-Wall -Wextra -Werror
CFLAGS_DEBUG =	-g -fsanitize=address
CPPFLAGS	=	$(foreach dir,$(INC_DIR),-I$(dir))
LDFLAGS		=	$(foreach dir,$(LIB_DIR),-L$(dir))
LDLIBS		=	-lftest -lft
RM			= 	rm -rf
LIB			=	$(addprefix $(LIB_DIR)/,$(LIB_NAME))

ifeq ($(shell uname),Linux)
	CFLAGS += -fPIC
endif

# **************************************************************************** #
#	SOURCES
# **************************************************************************** #

SRC_NAME	=	main.c
SRC			=	$(addprefix $(SRC_DIR)/,$(SRC_NAME))

# **************************************************************************** #
#	OBJS
# **************************************************************************** #

OBJ_NAME	=	$(SRC_NAME:.c=.o)
OBJ			=	$(addprefix $(OBJ_DIR)/,$(OBJ_NAME))

# **************************************************************************** #

all : $(NAME)

debug: CFLAGS := $(CFLAGS) $(CFLAGS_DEBUG)
debug: all

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(CFLAGS) $(LDFLAGS) -o $@ $(OBJ) $(LDLIBS)

$(PROJECT):
	make -C ../

$(LIB):
	make -C $(LIB_DIR) CFLAGS="$(CFLAGS)"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(LIB)
	@mkdir -p $(dir $@)
	$(CC) $(CPPFLAGS) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all debug clean fclean re
