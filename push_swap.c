/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 00:09:15 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/04/27 02:39:54 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_b = NULL;
	stack_a = NULL;
	stack_a = stock_elements(stack_a, ac, av);
	check_duplicated(stack_a);
	if (check_if_sorted(stack_a) == 0)
		exit (EXIT_SUCCESS);
	ft_index(&stack_a);
	ft_positioning_all(&stack_a, &stack_b);
	check_sort_type(&stack_a, &stack_b);
	ft_lstclear(&stack_a);
	ft_lstclear(&stack_b);
}

int	main(int ac, char **av)
{
	if (ac <= 1)
		exit(EXIT_FAILURE);
	check_args(ac, av);
	push_swap(ac, av);
	return (0);
}
