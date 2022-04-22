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
			ft_lstadd_back(&stack_a, ft_lstnew(ft_atoi(arg[idx[1]])));
		free_tab(arg);
	}

	return (stack_a);
}
