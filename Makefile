NAME = push_swap
SRC = push_swap.c Utils/push_swap_utils.c Utils/ft_check.c Utils/error_handling.c \
		moves/s_moves.c moves/r_moves.c moves/rr_moves.c moves/p_moves.c Utils/ft_sorting.c Utils/ft_sorting_utils.c
BNS_SRC = checker.c Utils/push_swap_utils.c Utils/ft_check.c Utils/error_handling.c \
		moves/s_moves.c moves/r_moves.c moves/rr_moves.c moves/p_moves.c Utils/ft_sorting.c Utils/ft_sorting_utils.c \
		Get_Next_Line_Proj/get_next_line.c Get_Next_Line_Proj/get_next_line_utils.c
OBJ = $(SRC:.c=.o)
BNS_OBJ = $(BNS_SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJ) push_swap.h
	make bonus -C ./libft
	gcc $(SRC) -o $(NAME) ./libft/libft.a -g

bonus : $(BNS_OBJ) checker.h
	make bonus -C ./libft
	gcc $(BNS_SRC) -o checker ./libft/libft.a -g

clean :
	make clean -C ./libft 
	rm -rf $(OBJ)

fclean :
	make fclean -C ./libft
	rm -rf $(OBJ) $(NAME) $(BNS_OBJ) checker push_swap.dSYM checker.dSYM

re : fclean all

.PHONY : clean fclean all re bonus