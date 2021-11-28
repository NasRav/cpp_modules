NAME =		Brains

CPP =		clang++
RM =		/bin/rm -f
FLAGS =		-Wall -Wextra -Werror -std=c++98

SRCS =		main.cpp


OBJS =		$(SRCS:.cpp=.o)


.c.o :
			$(CPP) $(FLAGS) -c $< -o $(<:.cpp=.o)


$(NAME) :	$(OBJS)
			$(CPP) $(FLAGS) -o $(NAME) $(OBJS)


all :		$(NAME)

clean :
			$(RM) $(OBJS)

fclean :	clean
			$(RM) $(NAME)

re :		fclean \
			all

.PHONY :	all clean fclean re
