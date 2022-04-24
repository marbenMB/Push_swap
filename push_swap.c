/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 00:09:15 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/04/20 00:09:16 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(int ac, char **av)
{
	t_list	*stack_a;

	stack_a = NULL;
	stack_a = stock_elements(stack_a, ac, av);
	check_duplicated(stack_a);
	ft_putendl_fd("\033[32m * +> Duplication Check Done **\033[0m", 1);
	if (check_if_sorted(stack_a) == 0)
		exit (EXIT_SUCCESS);
	ft_putendl_fd("\033[32m * +> If Sorted Check Done **\033[0m", 1);
	ft_index(&stack_a);
	ft_lstclear(&stack_a);
}

int	main(int ac, char **av)
{
	if (ac <= 1)
		exit(EXIT_FAILURE);
	check_args(ac, av);
	ft_putendl_fd("\033[32m * +> Args Check Done **\033[0m", 1);
	push_swap(ac, av);
	// system("leaks push_swap");
	return (0);
}

/* void	print_struct(t_list *start)
{
	while (start)
	{
		printf("\033[35m * +> %d : [%d] **\033[0m\n", start->content, start->index);
		start = start->next;
	}
	ft_putendl_fd("--------------------------", 1);
} */

/* // ****************************************************************
	t_list	*tmp;
	ft_putendl_fd("\033[38m* stack_1 before *\033[0m", 1);
	print_struct(stack_a);
	tmp = ft_lstnew(12);
	tmp->next = ft_lstnew(9);
	tmp->next->next = ft_lstnew(1);
	tmp->next->next->next = ft_lstnew(31);
	ft_putendl_fd("\033[38m* stack_2 before *\033[0m", 1);
	print_struct(tmp);
	pa(&stack_a, &tmp);
	pa(&stack_a, &tmp);
	// pa(&stack_a, &tmp);
	ft_putendl_fd("\033[38m* stack_2 after *\033[0m", 1);
	print_struct(tmp);
	ft_putendl_fd("\033[38m* stack_1 after *\033[0m", 1);
	print_struct(stack_a);
	ft_lstclear(&tmp);
// ****************************************************************** */