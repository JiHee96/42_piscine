CC			= gcc
CFLAGS		= -Wall -Werror -Wextra
NAME		= bsq
INCL		= includes
SRCS		= ./srcs/ft_input.c ./srcs/ft_map_error.c ./srcs/ft_map_input.c ./srcs/ft_map_output.c ./srcs/ft_map_search.c ./srcs/ft_map_square.c ./srcs/ft_map_util.c ./srcs/ft_math.c ./srcs/ft_str_lib.c ./srcs/ft_str_util.c ./srcs/ft_ui.c ./srcs/ft_ui_console_output.c ./srcs/main.c
OBJECTS		= ${SRCS:.c=.o}

all: $(NAME)

%.o: %.c
	${CC} ${CFLAGS} -c $< -I ${INCL} -o ${<:.c=.o}

$(NAME): ${OBJECTS}
	${CC} ${CFLAGS} -o $@ $^

clean:
	rm -f ${OBJECTS}

fclean: clean
	rm -f $(NAME)

re: fclean all
