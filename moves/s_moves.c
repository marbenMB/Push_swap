/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_moves.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 07:37:36 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/04/24 07:37:37 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_list **stack_a, int call)
{
	t_list	*tmp;

	if (ft_lstsize(*stack_a) > 1)
	{
		tmp = (*stack_a)->next;
		(*stack_a)->next = tmp->next;
		ft_lstadd_front(stack_a, tmp);
		if (call)
			ft_putendl_fd("sa", 1);
		ft_positioning(stack_a);
	}
}

void	sb(t_list **stack_b, int call)
{
	t_list	*tmp;

	if (ft_lstsize(*stack_b) > 1)
	{
		tmp = (*stack_b)->next;
		(*stack_b)->next = tmp->next;
		ft_lstadd_front(stack_b, tmp);
		if (call)
			ft_putendl_fd("sb", 1);
		ft_positioning(stack_b);
	}
}

void	ss(t_list **stack_a, t_list **stack_b, int call)
{
	sa(stack_a, 0);
	sb(stack_b, 0);
	if (call)
		ft_putendl_fd("ss", 1);
	ft_positioning_all(stack_a, stack_b);
}
