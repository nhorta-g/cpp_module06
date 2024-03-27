# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nuno <nuno@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/09 23:40:13 by nuno              #+#    #+#              #
#    Updated: 2024/03/09 23:40:17 by nuno             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	convert

CXX			=	c++

SRCS		=	main.cpp \
				ScalarConverter.cpp

CXXFLAGS	=	-Wall -Wextra -Werror -g -std=c++98 #-fsanitize=address

RM			=	rm -f

OBJS		=	$(SRCS:%.cpp=%.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CXX) $(OBJS) $(CXXFLAGS) -o $(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

test:	fclean all
		clear && ./$(NAME) 0
		./$(NAME) 42
		./$(NAME) 42.0f
		./$(NAME) 42.0
		./$(NAME) nan
		./$(NAME) nanf
		./$(NAME) inf
		./$(NAME) inff
		./$(NAME) -inf
		./$(NAME) -inff
		./$(NAME) -0
		./$(NAME) -0.0
		./$(NAME) -0.0f
		./$(NAME) 0.0
		./$(NAME) 0.0f
		./$(NAME) 0.f
		./$(NAME) 33.4321d
		./$(NAME) 33.4321f
		./$(NAME) 33.4321
		./$(NAME) 21212121
		./$(NAME) 2147483647
		./$(NAME) 2147483648
		./$(NAME) 2147483648.0
		./$(NAME) 2147483648.0f

valgrind: fclean all
		clear && valgrind --leak-check=full --show-leak-kinds=all --log-file=valgrind-out.txt ./$(NAME) 0
		valgrind --leak-check=full --show-leak-kinds=all --log-file=valgrind-out.txt ./$(NAME) 42
		valgrind --leak-check=full --show-leak-kinds=all --log-file=valgrind-out.txt ./$(NAME) 42.0f
		valgrind --leak-check=full --show-leak-kinds=all --log-file=valgrind-out.txt ./$(NAME) 42.0
		valgrind --leak-check=full --show-leak-kinds=all --log-file=valgrind-out.txt ./$(NAME) nan
		valgrind --leak-check=full --show-leak-kinds=all --log-file=valgrind-out.txt ./$(NAME) nanf
		valgrind --leak-check=full --show-leak-kinds=all --log-file=valgrind-out.txt ./$(NAME) inf
		valgrind --leak-check=full --show-leak-kinds=all --log-file=valgrind-out.txt ./$(NAME) inff
		valgrind --leak-check=full --show-leak-kinds=all --log-file=valgrind-out.txt ./$(NAME) -inf
		valgrind --leak-check=full --show-leak-kinds=all --log-file=valgrind-out.txt ./$(NAME) -inff
		valgrind --leak-check=full --show-leak-kinds=all --log-file=valgrind-out.txt ./$(NAME) -0
		valgrind --leak-check=full --show-leak-kinds=all --log-file=valgrind-out.txt ./$(NAME) -0.0
		valgrind --leak-check=full --show-leak-kinds=all --log-file=valgrind-out.txt ./$(NAME) -0.0f
		valgrind --leak-check=full --show-leak-kinds=all --log-file=valgrind-out.txt ./$(NAME) 0.0
		valgrind --leak-check=full --show-leak-kinds=all --log-file=valgrind-out.txt ./$(NAME) 0.0f
		valgrind --leak-check=full --show-leak-kinds=all --log-file=valgrind-out.txt ./$(NAME) 0.f
		valgrind --leak-check=full --show-leak-kinds=all --log-file=valgrind-out.txt ./$(NAME) 33.4321d
		valgrind --leak-check=full --show-leak-kinds=all --log-file=valgrind-out.txt ./$(NAME) 33.4321f
		valgrind --leak-check=full --show-leak-kinds=all --log-file=valgrind-out.txt ./$(NAME) 33.4321
		valgrind --leak-check=full --show-leak-kinds=all --log-file=valgrind-out.txt ./$(NAME) 21212121
		valgrind --leak-check=full --show-leak-kinds=all --log-file=valgrind-out.txt ./$(NAME) 2147483647
		valgrind --leak-check=full --show-leak-kinds=all --log-file=valgrind-out.txt ./$(NAME) 2147483648
		valgrind --leak-check=full --show-leak-kinds=all --log-file=valgrind-out.txt ./$(NAME) 2147483648.0
		valgrind --leak-check=full --show-leak-kinds=all --log-file=valgrind-out.txt ./$(NAME) 2147483648.0f

re:			fclean all

.PHONY:		all clean fclean re
