#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

//	***********	Includes :
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <string.h>
# include "./libft/libft.h"


//	STRUCT	***********	:
typedef struct s_stack
{
	int				elem;
	struct s_stack	*next;
}	t_stack;
//	FUNCTIONS	***********	:
//	***********	Error Handling :
void	error_no_args(void);
void	error_not_digit(void);
void	error_empty(void);
//	***********	Check Functions :
void	check_args(int ac, char **av);
//	***********	Push_swap Function :
void	push_swap(int ac, char **av);
#endif