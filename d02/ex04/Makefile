# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/03 12:22:53 by rnovodra          #+#    #+#              #
#    Updated: 2018/10/03 12:22:54 by rnovodra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	eval_expr

SRCS	=	main.cpp			\
			Fixed.class.cpp		\

OBJS	=	$(patsubst %.cpp,%.o,$(SRCS))

RM		=	rm -rf

CXX		=	clang++

FLAGS	=	-Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) -o $@ $(OBJS) $(FLAGS)

%.o: %.cpp
	$(CXX) -c $< -o $@ $(FLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
