/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorting_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 23:32:10 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/04/24 23:32:13 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_positioning(t_list **stack)
{
	int		post;
	t_list	*st;

	post = 1;
	st = *stack;
	while (st)
	{
		st->pos = post;
		st = st->next;
		post++;
	}
}

void	ft_positioning_all(t_list **stack_a, t_list **stack_b)
{
	ft_positioning(stack_a);
	ft_positioning(stack_b);
}

int	find_min_idx(t_list *stack)
{
	int		min;

	min = 9999;
	while (stack)
	{
		if (min > stack->idx)
			min = stack->idx;
		stack = stack->next;
	}
	return (min);
}

int	min_pos(t_list *stack)
{
	int		min_idx;

	min_idx = find_min_idx(stack);
	while (stack->idx != min_idx)
		stack = stack->next;
	return (stack->pos);
}
