#include "push_swap.h"

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
	}
}

void	ss(t_list **stack_a, t_list **stack_b)
{
	sa(stack_a, 0);
	sb(stack_b, 0);
	ft_putendl_fd("ss", 1);
}