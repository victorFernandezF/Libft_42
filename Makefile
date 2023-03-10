# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: victofer <victofer@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/26 09:36:58 by victofer          #+#    #+#              #
#    Updated: 2023/03/10 11:58:15 by victofer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC=gcc
NAME=libft.a
CFLAGS=-Wall -Wextra -Werror
OPTIONS=-c -I.
SRC =	mem_functions/ft_memcpy.c mem_functions/ft_memmove.c mem_functions/ft_memchr.c \
		mem_functions/ft_memcmp.c mem_functions/ft_calloc.c mem_functions/ft_memset.c \
		str_functions/ft_isalpha.c str_functions/ft_isdigit.c str_functions/ft_isalnum.c \
		str_functions/ft_isascii.c str_functions/ft_isprint.c str_functions/ft_strlen.c \
		str_functions/ft_bzero.c str_functions/ft_strlcpy.c str_functions/ft_strlcat.c \
		str_functions/ft_toupper.c str_functions/ft_tolower.c str_functions/ft_strchr.c \
		str_functions/ft_strrchr.c str_functions/ft_strncmp.c  str_functions/ft_strnstr.c \
		str_functions/ft_strdup.c str_functions/ft_substr.c str_functions/ft_strjoin.c \
		str_functions/ft_strtrim.c str_functions/ft_itoa.c str_functions/ft_strmapi.c \
		str_functions/ft_striteri.c str_functions/ft_putchar_fd.c str_functions/ft_putstr_fd.c \
		str_functions/ft_putendl_fd.c str_functions/ft_putnbr_fd.c str_functions/ft_split.c \


	
#	 ft_atoi.c \
	 
	
#	max.c min.c \
	ft_printf.c ft_print_c_str_int.c ft_print_unsigned.c ft_print_hexa.c ft_print_ptr.c \
	ft_put_hexa.c ft_put_bin.c ft_put_oct.c ft_str_rev.c \
	
OBJ= $(SRC:.c=.o)
BONUS = list_functions/ft_lstnew.c list_functions/ft_lstadd_front.c list_functions/ft_lstsize.c list_functions/ft_lstlast.c \
		list_functions/ft_lstadd_back.c list_functions/ft_lstdelone.c list_functions/ft_lstclear.c list_functions/ft_lstiter.c list_functions/ft_lstmap.c
BONUS_OBJ =$(BONUS:.c=.o) 

# - COLOURS - 
GREEN=\033[0;32m
RED=\033[0;31m
BLUE=\033[0;34m
YELLOW = \033[0;93m
MAGENTA = \033[0;95m
END=\033[0m

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
	@echo "$(GREEN)⦿ $@ Compiled successfully ☺$(END)"


bonus: $(OBJ) $(BONUS_OBJ)
	ar rcs $(NAME) $(OBJ) $(BONUS_OBJ)
	@echo "$(GREEN)⦿ $@ Bonus Compiled successfully ☺$(END)"

clean:
	rm -f $(OBJ) $(BONUS_OBJ)
	@echo "$(MAGENTA)⦿ Everything cleaned $(END)"

fclean: clean
	rm -f $(NAME)

re: fclean all	

every: all bonus

revery: fclean all bonus

.SILENT: $(OBJS)
.PHONY: clean fclean all re bonus
