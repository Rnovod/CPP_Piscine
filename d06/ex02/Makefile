# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/06 20:00:11 by rnovodra          #+#    #+#              #
#    Updated: 2018/10/06 20:00:13 by rnovodra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MAKEFLAGS	+=	-s

NAME		=	identify

SRCS		=	main.cpp		\
				identify.cpp	\
				Base.cpp		\
				A.cpp			\
				B.cpp			\
				C.cpp			\

OBJS		=	$(patsubst %.cpp,%.o,$(SRCS))

CXX			=	clang++

RM			=	rm -rf

FLAGS		=	-Wall -Werror -Wextra

BG			=	"\033[32;1m"
BR			=	"\033[31;1m"

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) -o $@ $(OBJS) $(FLAGS)
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
