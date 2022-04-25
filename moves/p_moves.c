/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_moves.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 07:37:13 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/04/24 07:37:15 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*fill_node(t_list *stack)
{
	t_list	*node;

	node = ft_lstnew(stack->content);
	node->idx = stack->idx;
	return (node);
}

void	pa(t_list **stack_b, t_list **stack_a, int call)
{
	t_list	*tmp;
	t_list	*last;

	if (ft_lstsize(*stack_b) > 0)
	{
		tmp = fill_node(*stack_b);
		ft_lstadd_front(stack_a, tmp);
		last = *stack_b;
		*stack_b = (*stack_b)->next;
		ft_lstdelone(last);
		if (call)
			ft_putendl_fd("pa", 1);
		ft_positioning_all(stack_a, stack_b);
	}
}

void	pb(t_list **stack_a, t_list **stack_b, int call)
{
	t_list	*tmp;
	t_list	*last;

	if (ft_lstsize(*stack_a) > 0)
	{
		tmp = fill_node(*stack_a);
		ft_lstadd_front(stack_b, tmp);
		last = *stack_a;
		*stack_a = (*stack_a)->next;
		ft_lstdelone(last);
		if (call)
			ft_putendl_fd("pb", 1);
		ft_positioning_all(stack_a, stack_b);
	}
}
