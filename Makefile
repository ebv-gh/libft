# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eubotnar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/08 16:06:50 by eubotnar          #+#    #+#              #
#    Updated: 2019/01/08 17:57:08 by eubotnar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a

INCLUDE_FOLDERS := -I includes/
SOURCES_FOLDER := srcs/
OBJECTS_FOLDER := objs/

vpath %.c srcs # Directories to be searched for MISSING source files.

FLAGS := -Wall -Werror -Wextra

SOURCES := \
		char/ft_isalnum.c \
		char/ft_isalpha.c \
		char/ft_isascii.c \
		char/ft_isdigit.c \
		char/ft_islower.c \
		char/ft_isprint.c \
		char/ft_isupper.c \
		lst/ft_lstadd.c \
		lst/ft_lstdel.c \
		lst/ft_lstdelone.c \
		lst/ft_lstiter.c \
		lst/ft_lstmap.c \
		lst/ft_lstnew.c \
		mem/ft_bzero.c \
		mem/ft_memalloc.c \
		mem/ft_memccpy.c \
		mem/ft_memchr.c \
		mem/ft_memcmp.c \
		mem/ft_memcpy.c \
		mem/ft_memdel.c \
		mem/ft_memmove.c \
		mem/ft_memset.c \
		put/ft_putchar.c \
		put/ft_putchar_fd.c \
		put/ft_putendl.c \
		put/ft_putendl_fd.c \
		put/ft_putnbr.c \
		put/ft_putnbr_fd.c \
		put/ft_putstr.c \
		put/ft_putstr_fd.c \
		str/ft_strcat.c \
		str/ft_strchr.c \
		str/ft_strclr.c \
		str/ft_strcmp.c \
		str/ft_strcpy.c \
		str/ft_strdel.c \
		str/ft_strdup.c \
		str/ft_strequ.c \
		str/ft_striter.c \
		str/ft_striteri.c \
		str/ft_strjoin.c \
		str/ft_strlcat.c \
		str/ft_strlen.c \
		str/ft_strmap.c \
		str/ft_strmapi.c \
		str/ft_strncat.c \
		str/ft_strncmp.c \
		str/ft_strncpy.c \
		str/ft_strnequ.c \
		str/ft_strnew.c \
		str/ft_strnstr.c \
		str/ft_strrchr.c \
		str/ft_strsplit.c \
		str/ft_strstr.c \
		str/ft_strsub.c \
		str/ft_strtrim.c \
		to/ft_atoi.c \
		to/ft_itoa.c \
		xtra/ft_tolower.c \
		xtra/ft_toupper.c \
		xtra/ft_count_words.c \
		xtra/ft_malloc_word.c \
		xtra/ft_isspace.c \

OBJECTS := $(SOURCES:.c=.o)

OBJECTS := $(addprefix $(OBJECTS_FOLDER), $(OBJECTS))
SOURCES := $(addprefix $(SOURCES_FOLDER), $(SOURCES))

NO_COLOR     := \x1b[0m
OK_COLOR     := \x1b[32;01m
HEAD_COLOR   := \x1b[32;01m

HEADER_PRINTED := NO

all: $(NAME)

$(NAME): $(OBJECTS)
	@printf "\n$(HEAD_COLOR)Compiling $(NAME)...$(NO_COLOR)"
	@ar rcs $(NAME) $(OBJECTS)
	@ranlib $(NAME)
	@printf " $(OK_COLOR)Done ✓$(NO_COLOR)\n"

objs/%.o: %.c
	@if [ "$(HEADER_PRINTED)" = "NO" ]; then \
		printf "\n$(HEAD_COLOR)--------------------------------\n"; \
		printf "$(HEAD_COLOR)------------ LIBFT -------------\n"; \
		printf "$(HEAD_COLOR)--------------------------------$(NO_COLOR)\n\n"; \
		$(eval HEADER_PRINTED := YES) \
	fi
	@mkdir -p $(dir $@)
	@$(CC) $(FLAGS) $(INCLUDE_FOLDERS) -c $< -o $@
	@printf "$(notdir $<) " # Takes away the path leaving just the file name.
	@printf "$(OK_COLOR)✓$(NO_COLOR)\n"

clean:
	@rm -rf $(OBJECTS_FOLDER)
	@printf "$(HEAD_COLOR)libft : Objects removed$(NO_COLOR)\n"

fclean:
	@make clean
	@rm -rf $(NAME)
	@printf "$(HEAD_COLOR)libft : Library removed$(NO_COLOR)\n"

re:
	@make fclean
	@make

.PHONY: all re clean fclean header
