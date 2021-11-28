NAME =		Acount

CPP =		clang++
RM =		/bin/rm -f
FLAGS =		-Wall -Wextra -Werror

SRCS =		tests.cpp \
			Account.cpp


OBJS =		$(SRCS:.cpp=.o)


.c.o :
			$(CPP) $(FLAGS) -c $< -o $(<:.cpp=.o)


$(NAME) :	$(OBJS) Account.hpp
			$(CPP) $(FLAGS) -o $(NAME) $(OBJS)


all :		$(NAME)

clean :
			$(RM) $(OBJS)

fclean :	clean
			$(RM) $(NAME)

re :		fclean \
			all

.PHONY :	all clean fclean re
