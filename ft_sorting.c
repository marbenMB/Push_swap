/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorting.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 07:39:06 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/04/24 07:39:08 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_tree(t_list **stack)
{
	if (check_if_sorted(*stack) == 0)
		return ;
	else if ((*stack)->idx > (*stack)->next->idx \
				&& (*stack)->idx > (*stack)->next->next->idx)
	{
		if ((*stack)->next->idx > (*stack)->next->next->idx)
		{
			ra(stack, 1);
			sa(stack, 1);
		}
		else if ((*stack)->next->idx < (*stack)->next->next->idx)
			ra(stack, 1);
	}
	else if ((*stack)->idx < (*stack)->next->idx \
				&& (*stack)->idx < (*stack)->next->next->idx)
	{
		sa(stack, 1);
		ra(stack, 1);
	}
	else if ((*stack)->idx < (*stack)->next->idx \
				&& (*stack)->idx > (*stack)->next->next->idx)
		rra(stack, 1);
	else if ((*stack)->idx > (*stack)->next->idx \
				&& (*stack)->idx < (*stack)->next->next->idx)
		sa(stack, 1);
}

void	sort_four(t_list **stack_a, t_list **stack_b)
{
	int		pos_min;
	int		len;
	int		i;

	pos_min = min_pos(*stack_a);
	len = ft_lstsize(*stack_a);
	i = -1;
	if (pos_min <= (len / 2))
	{
		while (++i < pos_min - 1)
			ra(stack_a, 1);
	}
	else if (pos_min > (len / 2))
	{
		i = -1;
		while (++i < len - pos_min + 1)
			rra(stack_a, 1);
	}
	pb(stack_a, stack_b, 1);
	sort_tree(stack_a);
	pa(stack_b, stack_a, 1);
}

void	sort_five(t_list **stack_a, t_list **stack_b)
{
	int		pos_min;
	int		len;
	int		i;

	pos_min = min_pos(*stack_a);
	len = ft_lstsize(*stack_a);
	i = -1;
	if (pos_min <= (len / 2))
	{
		while (++i < pos_min - 1)
			ra(stack_a, 1);
	}
	else if (pos_min > (len / 2))
	{
		i = -1;
		while (++i < len - pos_min + 1)
			rra(stack_a, 1);
	}
	pb(stack_a, stack_b, 1);
	sort_four(stack_a, stack_b);
	pa(stack_b, stack_a, 1);
}
