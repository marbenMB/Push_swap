#ifndef CHECKER_H
# define CHECKER_H

//	***********	Includes :
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <string.h>
# include <limits.h>
# include "./libft/libft.h"
# include "push_swap.h"
# include "./Get_Next_Line_Proj/get_next_line.h"

# define INS {"pa", "pb", "sa", "sb", "ss", "ra", "rb", "rr", "rra", "rrb", "rrr", NULL}

//	FUNCTIONS	***********	:
//	***********	Checker functions :
void	read_instraction(t_list **stack_a, t_list **stack_b);
void	checker(int ac, char **av);
#endif