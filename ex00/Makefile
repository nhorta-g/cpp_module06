NAME		=	ex06

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

re:			fclean all

.PHONY:		all clean fclean re