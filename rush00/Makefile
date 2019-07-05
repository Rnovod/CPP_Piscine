# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/01 14:43:45 by rnovodra          #+#    #+#              #
#    Updated: 2018/10/01 14:43:46 by rnovodra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MAKEFLAGS	+=	-s

NAME		=	ft_retro

SRCS		=	main.cpp		\
				GameZone.cpp	\
				GameEntity.cpp	\
				Player.cpp		\
				Bullet.cpp		\
				Enemy.cpp		\
				Stars.cpp		\
				EnemyElite.cpp	\
				EnemyBoss.cpp	\

OBJS		=	$(patsubst %.cpp,%.o,$(SRCS))

CXX			=	clang++

RM			=	rm -rf

FLAGS		=	-Wall -Werror -Wextra

BG			=	"\033[32;1m"
BR			=	"\033[31;1m"

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) -o $@ $(OBJS) $(FLAGS) -lcurses
	@echo ${BG}"[ ✓ ] $@"

%.o: %.cpp
	$(CXX) -c $< -o $@ $(FLAGS)
	@echo ${BG}"[ ✓ ] $@"

clean:
	$(RM) $(OBJS)
	@echo ${BR}"[ ✗ ] $(OBJS)"

fclean: clean
	$(RM) $(NAME)
	@echo ${BR}"[ ✗ ] $(NAME)"

re: fclean all

.PHONY: all fclean clean re
