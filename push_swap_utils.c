/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 00:09:22 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/04/20 00:09:24 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*stock_elements(int ac, char **av)
{
	int		idx;
	t_list	*stack_a;

	idx = 0;
	while (++idx < ac)
		ft_lstadd_back(&stack_a, ft_lstnew(ft_atoi(av[idx])));

	return (stack_a);
}
