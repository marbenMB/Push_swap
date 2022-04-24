/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_moves.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 07:37:20 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/04/24 07:37:22 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list **stack_a, int call)
{
	t_list	*tmp;

	if (ft_lstsize(*stack_a) > 1)
	{
		tmp = *stack_a;
		ft_lstlast(*stack_a)->next = tmp;
		*stack_a = (*stack_a)->next;
		tmp->next = NULL;
		if (call)
			ft_putendl_fd("ra", 1);
	}
}

void	rb(t_list **stack_b, int call)
{
	t_list	*tmp;

	if (ft_lstsize(*stack_b) > 1)
	{
		tmp = *stack_b;
		ft_lstlast(*stack_b)->next = tmp;
		*stack_b = (*stack_b)->next;
		tmp->next = NULL;
		if (call)
			ft_putendl_fd("rb", 1);
	}
}

void	rr(t_list **stack_a, t_list **stack_b)
{
	ra(stack_a, 0);
	rb(stack_b, 0);
	ft_putendl_fd("rr", 1);
}
