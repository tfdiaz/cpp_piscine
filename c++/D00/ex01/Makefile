# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tdiaz <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/25 13:02:32 by tdiaz             #+#    #+#              #
#    Updated: 2018/09/25 13:02:34 by tdiaz            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

CC = @clang++

CCFLAGS = -Wall -Wextra -Werror

SRC = main.cpp book.class.cpp contact.class.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME) : $(OBJ)
	@$(CC) $(CCFLAGS) $(OBJ) -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re