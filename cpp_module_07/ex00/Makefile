NAME		=	Whatever

CLASSES		=
FUNCTIONS	=	main $(CLASSES)
SRCS		=	$(patsubst %,%.cpp,$(FUNCTIONS))
OBJS		=	$(patsubst %,%.o,$(FUNCTIONS))
HEADERS		=	$(patsubst %,%.hpp,$(CLASSES)) whatever.hpp

CPP			=	c++
FLAGS		=	-Wall -Wextra -Werror -std=c++98
RM			=	/bin/rm -f

.PHONY: all clean fclean re

all:		$(NAME)

$(NAME):	$(OBJS) $(HEADERS)
			$(CPP) $(OBJS) $(FLAGS) -o $(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean	all
