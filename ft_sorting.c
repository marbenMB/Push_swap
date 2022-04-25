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

	pos_min = num_pos(*stack_a, 0);
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

	pos_min = num_pos(*stack_a, 0);
	len = ft_lstsize(*stack_a);
	i = -1;
	if (pos_min <= (len / 2))
	{
		while (++i < pos_min - 1)
			ra(stack_a, 1);
	}
	else if (pos_min > (len / 2))
	{
		while (++i < len - pos_min + 1)
			rra(stack_a, 1);
	}
	pb(stack_a, stack_b, 1);
	sort_four(stack_a, stack_b);
	pa(stack_b, stack_a, 1);
}

void	b_to_a(t_list **stack_a, t_list **stack_b)
{
	int	pos_max;
	int	len;
	int	i;

	while (*stack_b)
	{
		pos_max = num_pos(*stack_b, 1);
		len = ft_lstsize(*stack_b);
		if (pos_max <= len / 2)
		{
			i = -1;
			while (++i < pos_max - 1)
				rb(stack_b, 1);
		}
		else if (pos_max > len / 2)
		{
			i = -1;
			while (++i < len - pos_max + 1)
				rrb(stack_b, 1);
		}
		pa(stack_b, stack_a, 1);
	}
}

void	sort_big(t_list **stack_a, t_list **stack_b, int constent)
{
	int		range;
	
	range = 2;
	while (*stack_a)
	{
		if ((*stack_a)->idx < range)
		{
			pb(stack_a, stack_b, 1);
			rb(stack_b, 1);
			range++;
		}
		else if ((*stack_a) && (*stack_a)->idx <= range + constent)
		{
			pb(stack_a, stack_b, 1);
			range++;
		}
		else
			ra(stack_a, 1);
		if (ft_lstsize(*stack_b) > 1)
		{
			if ((*stack_b)->idx < (*stack_b)->next->idx)
				sb(stack_b, 1);
		}
	}
	b_to_a(stack_a, stack_b);
}