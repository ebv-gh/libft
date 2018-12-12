# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eubotnar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/01 16:36:26 by eubotnar          #+#    #+#              #
#    Updated: 2018/10/02 13:23:48 by eubotnar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

# compileer flags:
CFLAGS = -Wall -Wextra -Werror
# -Wall turns on warning flags
# -Wextra enables some extra warning flags that are not enabled by -Wall.
# -Werro Make all warnings into errors. 
# -c Compile, but do not link.

SRC_DIR = srcs/


SRC = $(SRC_DIR)ft_putchar.c $(SRC_DIR)ft_putstr.c 
SRC += $(SRC_DIR)ft_strcmp.c $(SRC_DIR)ft_strlen.c $(SRC_DIR)ft_swap.c

# SRC = $(wildcard $(SRC_DIR)ft_*.c)

OBJ = $(SRC:$(SRC_DIR)%.c=%.o)

# OBJ = ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o

INCLUDES = includes/

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SRC) -I $(INCLUDES)
	ar rcs $(NAME) $(OBJ)
	# ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re: fclean all
