NAME =		MyPhoneBook

CPP =		clang++
RM =		/bin/rm -f
FLAGS =		-Wall -Wextra -Werror

SRCS =		main.cpp \
			Contact.class.cpp \
			PhoneBook.class.cpp


OBJS =		$(SRCS:.cpp=.o)


.c.o :
			$(CPP) $(FLAGS) -c $< -o $(<:.cpp=.o)


$(NAME) :	$(OBJS) Contact.class.hpp PhoneBook.class.hpp
			$(CPP) $(FLAGS) -o $(NAME) $(OBJS)


all :		$(NAME)

clean :
			$(RM) $(OBJS)

fclean :	clean
			$(RM) $(NAME)

re :		fclean \
			all

.PHONY :	all clean fclean re
