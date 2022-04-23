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

void	trim_args(char *av)
{
	char	*arg;
	int		idx;

	arg = ft_strtrim(av, " ");
	if (!arg)
		error();
	idx = -1;
	if (!arg[0])
		error();
	while (arg[++idx])
	{
		if (arg[idx] == '-' ||  arg[idx] == '+')
		{
			if (ft_isdigit(arg[idx - 1]) && arg[idx - 1])
				error();
			if (!ft_isdigit(arg[++idx]))
				error();
		}
		if (!ft_isdigit(arg[idx]) && arg[idx] != ' ')
			error();
	}
	free(arg);
}

void	check_args(int ac, char **av)
{
	int		idx;

	idx = 0;
	while (++idx < ac && av[idx])
	{
		if (!av[idx] || !av[idx][0])
			error();
		trim_args(av[idx]);
	}
}

int	check_if_sorted(t_list *stack_a)
{
	int		len_stack;
	t_list	*start;
	int		now;

	len_stack = ft_lstsize(stack_a);
	if (len_stack == 1)
		exit (EXIT_SUCCESS);
	start = stack_a;
	while (start)
	{
		now = start->content;
		while (stack_a->next)
		{	
			stack_a = stack_a->next;
			if (now > stack_a->content)
				return (1);
		}
		start = start->next;
		stack_a = start;
	}
	return (0);
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
