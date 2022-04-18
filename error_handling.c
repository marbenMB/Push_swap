#include "push_swap.h"

void	error_no_args(void)
{
	ft_putendl_fd("\033[31m ** ERROR : No arguments	**\033[0m", 2);
	exit (EXIT_FAILURE);
}

void	error_empty(void)
{
	ft_putendl_fd("empty arg", 2);
	exit (EXIT_FAILURE);
}

void	error_not_digit(void)
{
	ft_putendl_fd("not digit", 2);
	exit (EXIT_FAILURE);
}