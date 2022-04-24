/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr_moves.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 07:37:26 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/04/24 07:37:28 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_privous_lstlast(t_list *lst)
{	
	if (!lst)
		return (NULL);
	while (lst -> next -> next)
		lst = lst -> next;
	return (lst);
}

void	rra(t_list **stack_a, int call)
{
	t_list	*tmp;

	if (ft_lstsize(*stack_a) > 1)
	{
		tmp = ft_lstlast(*stack_a);
		ft_privous_lstlast(*stack_a)->next = NULL;
		ft_lstadd_front(stack_a, tmp);
		if (call)
			ft_putendl_fd("rra", 1);
	}
}

void	rrb(t_list **stack_b, int call)
{
	t_list	*tmp;

	if (ft_lstsize(*stack_b) > 1)
	{
		tmp = ft_lstlast(*stack_b);
		ft_privous_lstlast(*stack_b)->next = NULL;
		ft_lstadd_front(stack_b, tmp);
		if (call)
			ft_putendl_fd("rra", 1);
	}
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	rra(stack_a, 0);
	rrb(stack_b, 0);
	ft_putendl_fd("rrr", 1);
}
