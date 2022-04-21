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

	stack_a = stock_elements(ac, av);
	while (stack_a)
	{
		printf("%d	", stack_a->content);
		stack_a = stack_a->next;
	}
	printf("\n");
}

int	main(int ac, char **av)
{
	if (ac <= 1)
		exit(EXIT_FAILURE);
	check_args(ac, av);
	ft_putendl_fd("\033[32m * -> First Check Done **\033[0m",1);
	
	push_swap(ac, av);
	return (0);
}
