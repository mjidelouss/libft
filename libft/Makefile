# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelousse <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/01 09:17:50 by aelousse          #+#    #+#              #
#    Updated: 2021/11/14 22:19:06 by aelousse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME =    libft.a

SRCS =    ft_atoi.c\
        ft_isalpha.c\
        ft_isalpha.c\
        ft_isalpha.c\
        ft_itoa.c\
        ft_itoa.c\
        ft_itoa.c\
        ft_memmove.c\
        ft_memmove.c\
        ft_memmove.c\
        ft_putnbr_fd.c\
        ft_putnbr_fd.c\
        ft_putnbr_fd.c\
        ft_strdup.c\
        ft_strlcpy.c\
        ft_strnstr.c\
        ft_tolower.c\
        ft_bzero.c\
        ft_isascii.c\
        ft_memchr.c\
        ft_memset.c\
        ft_putstr_fd.c\
        ft_striteri.c\
        ft_strlen.c\
        ft_strrchr.c\
        ft_toupper.c\
        ft_calloc.c\
        ft_isdigit.c\
        ft_memcmp.c\
        ft_putchar_fd.c\
        ft_split.c\
        ft_strjoin.c\
        ft_strmapi.c\
        ft_strtrim.c\
        ft_isalnum.c\
        ft_isprint.c\
        ft_memcpy.c\
        ft_putendl_fd.c\
        ft_strchr.c\
        ft_strlcat.c\
        ft_strncmp.c\
        ft_substr.c
B_SRCS =    ft_lstnew.c\
            ft_lstadd_front.c\
            ft_lstsize.c\
            ft_lstlast.c\
            ft_lstadd_back.c\
            ft_lstdelone.c\
            ft_lstclear.c\
            ft_lstiter.c\
            ft_lstmap.c
OBJS = $(SRCS:.c=.o)
B_OBJS = $(B_SRCS:.c=.o)
CFLAGS = -Wall -Werror -Wextra
CC = gcc
RM = rm -f
AR = @ar -rcs

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

bonus: $(B_OBJS) $(OBJS)
	$(AR) $(NAME) $(B_OBJS) $(OBJS)

%.o: %.c
		$(CC) -I. -o $@ -c $? $(CFLAGS)

clean: clean
	$(RM) $(OBJS) $(B_OBJS)

fclean:clean
	$(RM) $(NAME)

re: fclean all
