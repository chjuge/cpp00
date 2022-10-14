# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/13 18:52:44 by mproveme          #+#    #+#              #
#    Updated: 2022/10/14 14:28:26 by mproveme         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ex01.cpp

OBJS	= 	$(SRCS:.c=.o)

HEAD	=	ex01.hpp

CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror

RM		=	rm -rf

NAME	=	megaphone

all:		$(NAME)

%.o:		%.c	$(HEAD) 
			$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJS) $(HEAD) 
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:		
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re 