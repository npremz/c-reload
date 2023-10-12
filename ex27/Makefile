SOURCES = ft_display_file.c

OBJECTS = $(SOURCES:.c=.o) 

INCLUDE = includes

GCC_FLAGS = -Wall -Wextra -Werror

NAME = ft_display_file

all: $(NAME)

$(NAME): $(OBJECTS)
	gcc $(GCC_FLAGS) -o $(NAME) $(OBJECTS)

$(OBJECTS):
	gcc $(GCC_FLAGS) -I $(INCLUDE) -c ${@:.o=.c} -o $@

clean:
	rm -f $(OBJECTS)

fclean:
	rm -f $(NAME) $(OBJECTS)

re: fclean all

.PHONY: all clean fclean re
