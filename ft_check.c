#include "push_swap.h"

// TODO : if the arg contain : space or multiple spaces in front -> " 55" or "     5" || just multiple spaces or empty -> "    " or "" || 

void	check_args(int ac, char **av)
{
	int		idx;
	int		jdx;

	jdx = 0;
	while (++jdx < ac && av[jdx])
	{
		if (!av[jdx])
			error_empty();
		idx = -1;
		while (av[jdx][++idx])
		{
			if (idx == 0 && (av[jdx][idx] == '-' || av[jdx][idx] == '+'))
				idx++;
			if (!ft_isdigit(av[jdx][idx]))
				error_not_digit();
		}
	}
}