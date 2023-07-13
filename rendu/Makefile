# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rahmed <rahmed@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/06 15:51:13 by rahmed            #+#    #+#              #
#    Updated: 2021/11/14 16:58:31 by rahmed           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libftprintf.a
LIBFT_DIR	=	libft
LIBFT_LIB	=	libft.a

SRCS		=	ft_printf.c

OBJS		=	${SRCS:.c=.o}

HEADER		=	.
CC			=	gcc
RM			=	rm -f
AR			=	ar rcs
CFLAGS		=	-Wall -Wextra -Werror

TXT_RED		=	\033[1;31m
TXT_GREEN	=	\033[1;32m
TXT_YELLOW	=	\033[1;33m
TXT_BLUE	=	\033[1;34m
TXT_MAGENTA	=	\033[1;35m
TXT_CYAN	=	\033[1;36m
FANCY_RESET	=	\033[0m

%.o:		%.c
			@echo "${TXT_BLUE}"
			${CC} -c ${CFLAGS} -o $@ $< -I${HEADER}
			@echo "${FANCY_RESET}"

${NAME}:	${OBJS}
			@echo "${TXT_GREEN}"
			@make all -C ${LIBFT_DIR}
			@echo "${TXT_CYAN}"
			cp ${LIBFT_DIR}/${LIBFT_LIB} ${NAME}
			@echo "${TXT_YELLOW}"
			${AR} ${NAME} ${OBJS}
			@echo "${FANCY_RESET}"

all:		${NAME}

clean:
			@echo "${TXT_RED}"
			${RM} ${OBJS}
			@echo "${TXT_GREEN}"
			@make clean -C ${LIBFT_DIR}
			@echo "$(FANCY_RESET)"

fclean:
			@echo "${TXT_RED}"
			${RM} ${OBJS}
			@echo "${TXT_MAGENTA}"
			${RM} ${NAME}
			@echo "${TXT_GREEN}"
			@make fclean -C ${LIBFT_DIR}
			@echo "$(FANCY_RESET)"

re:			fclean all

.PHONY:		all clean fclean re
