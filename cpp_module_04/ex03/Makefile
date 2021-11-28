NAME		=	Polymorphism_3

CLASSES		=	AMateria Character Cure Ice MateriaSource
FUNCTIONS	=	main $(CLASSES)
SRCS		=	$(patsubst %,%.cpp,$(FUNCTIONS))
OBJS		=	$(patsubst %,%.o,$(FUNCTIONS))
HEADERS		=	$(patsubst %,%.hpp,$(CLASSES)) ICharacter.hpp IMateriaSource.hpp

CPP			=	clang++
FLAGS		=	-Wall -Wextra -Werror -std=c++98
RM			=	/bin/rm -f

.PHONY: all clean fclean re

all:		$(NAME)

$(NAME):	$(OBJS) $(HEADERS)
			$(CPP) $(SRCS) $(FLAGS) -o $(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean	all
