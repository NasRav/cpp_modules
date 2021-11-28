NAME		=	Mutantstack

CLASSES		=	mutantstack
FUNCTIONS	=	main $(CLASSES)
SRCS		=	$(patsubst %,%.cpp,$(FUNCTIONS))
OBJS		=	$(patsubst %,%.o,$(FUNCTIONS))
HEADERS		=	$(patsubst %,%.hpp,$(CLASSES))

CPP			=	clang++
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
