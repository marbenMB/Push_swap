/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 00:09:44 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/04/20 00:09:47 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// TODO : if the arg contain : space or multiple spaces in front -> " 55" or "     5" || just multiple spaces or empty -> "    " or "" || 

void	check_args(int ac, char **av)
{
	int		idx;
	int		jdx;

	jdx = 0;
	while (++jdx < ac)
	{
		idx = 0;
		if (!av[jdx] || av[jdx][idx] == '\0')
			error();
		while (av[jdx][++idx])
		{
			if (av[jdx][idx] == ' ')
				idx++;
			if (av[jdx][idx] == '-' || av[jdx][idx] == '+')
			{
				if (ft_isdigit(av[jdx][--idx]))
					error();
				idx++;
				if (!(ft_isdigit(av[jdx][idx])))
					error();
				else if (ft_isdigit(av[jdx][idx]))
					idx++;
			}
			if (!(ft_isdigit(av[jdx][idx]) || av[jdx][idx] == ' '))
				error();
		}
	}
}

void	check_duplicated(t_list *stack_a)
{
	int		now;
	t_list	*start;

	start = stack_a;
	while (start)
	{
		now = start->content;
		while (stack_a->next)
		{
			stack_a = stack_a->next;
			if (now == stack_a->content)
				error();
		}
		start = start->next;
		stack_a = start;
	}
}
