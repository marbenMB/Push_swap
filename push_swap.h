/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 00:09:27 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/04/20 00:09:29 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

//	***********	Includes :
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <string.h>
# include <limits.h>
# include "./libft/libft.h"

//	FUNCTIONS	***********	:
//	***********	Error Handling :
void	error(void);
//	***********	Check Functions :
void	check_trim_args(char *av);
void	check_args(int ac, char **av);
void	check_duplicated(t_list *stack_a);
int		check_if_sorted(t_list *stack_a);
void	check_sort_type(t_list **stack_a, t_list **stack_b);
//	***********	Push_swap Utils Function :
void	free_tab(char **tab);
int		ft_atoi_max(const char *str);
t_list	*stock_elements(t_list	*stack_a, int ac, char **av);
void	ft_index(t_list **stack);
//	***********	Moves Function :
void	sa(t_list **stack_a, int call);
void	sb(t_list **stack_b, int call);
void	ss(t_list **stack_a, t_list **stack_b);
void	ra(t_list **stack_a, int call);
void	rb(t_list **stack_b, int call);
void	rr(t_list **stack_a, t_list **stack_b);
void	rra(t_list **stack_a, int call);
void	rrb(t_list **stack_b, int call);
void	pa(t_list **stack_b, t_list **stack_a);
void	pb(t_list **stack_a, t_list **stack_b);
//	***********	Sorting Utils Function :
void	ft_positioning_all(t_list **stack_a, t_list **stack_b);
void	ft_positioning(t_list **stack);
int		min_pos(t_list *stack);
//	***********	Sorting Function :
void	sort_tree(t_list **stack);
void	sort_four(t_list **stack_a, t_list **stack_b);
void	sort_five(t_list **stack_a, t_list **stack_b);
//	***********	Push_swap Function :
void	push_swap(int ac, char **av);
#endif
