/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 02:34:39 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/04/27 02:36:38 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	find_instraction(char *input, t_list **stack_a, t_list **stack_b)
{
	if (!ft_strcmp(input, "pa\n"))
		pa(stack_b, stack_a, 0);
	else if (!ft_strcmp(input, "pb\n"))
		pb(stack_a, stack_b, 0);
	else if (!ft_strcmp(input, "ra\n"))
		ra(stack_a, 0);
	else if (!ft_strcmp(input, "rb\n"))
		rb(stack_b, 0);
	else if (!ft_strcmp(input, "rr\n"))
		rr(stack_a, stack_b, 0);
	else if (!ft_strcmp(input, "rra\n"))
		rra(stack_a, 0);
	else if (!ft_strcmp(input, "rrb\n"))
		rrb(stack_b, 0);
	else if (!ft_strcmp(input, "rrr\n"))
		rrr(stack_a, stack_b, 0);
	else if (!ft_strcmp(input, "sa\n"))
		sa(stack_a, 0);
	else if (!ft_strcmp(input, "sb\n"))
		sb(stack_b, 0);
	else if (!ft_strcmp(input, "ss\n"))
		ss(stack_a, stack_b, 0);
	else
		error();
}

void	read_instraction(t_list **stack_a, t_list **stack_b)
{
	char	*line;

	while (1)
	{
		line = get_next_line(0);
		if (!line)
		{
			free(line);
			break ;
		}
		find_instraction(line, stack_a, stack_b);
		free(line);
	}
	if (!check_if_sorted(*stack_a) && ft_lstsize(*stack_b) == 0)
		ft_putendl_fd("\033[32mOK\033[0m", 1);
	else
		ft_putendl_fd("\033[33mKO\033[0m", 1);
}

void	checker(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_b = NULL;
	stack_a = NULL;
	stack_a = stock_elements(stack_a, ac, av);
	check_duplicated(stack_a);
	ft_index(&stack_a);
	ft_positioning_all(&stack_a, &stack_b);
	read_instraction(&stack_a, &stack_b);
	ft_lstclear(&stack_a);
	ft_lstclear(&stack_b);
}

int	main(int ac, char **av)
{
	if (ac <= 1)
		exit(EXIT_FAILURE);
	check_args(ac, av);
	checker(ac, av);
	return (0);
}
