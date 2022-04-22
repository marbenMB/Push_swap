/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 00:09:22 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/04/20 00:09:24 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_tab(char **tab)
{
	int		idx;

	idx = -1;
	while (tab[++idx])
		free(tab[idx]);
	free(tab);
}

int	ft_atoi_max(const char *str)
{
	long	num;
	int		signe;

	num = 0;
	signe = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			signe = -signe;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		num = num * 10 + *str - 48;
		if ((num * signe) < INT_MIN || (num * signe) > INT_MAX)
			error();
		str++;
	}
	return (num * signe);
}

t_list	*stock_elements(t_list	*stack_a, int ac, char **av)
{
	int		idx[2];
	char	**arg;

	idx[0] = 0;
	while (++idx[0] < ac)
	{
		idx[1] = -1;
		arg = ft_split(av[idx[0]], ' ');
		while (arg[++idx[1]])
			ft_lstadd_back(&stack_a, ft_lstnew(ft_atoi_max(arg[idx[1]])));
		free_tab(arg);
	}

	return (stack_a);
}
