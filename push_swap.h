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
void	check_args(int ac, char **av);
int		check_if_sorted(t_list *stack_a);
void	check_duplicated(t_list *stack_a);
//	***********	Push_swap Function :
void	free_tab(char **tab);
int		ft_atoi_max(const char *str);
void	push_swap(int ac, char **av);
//	***********	Push_swap Utils Function :
t_list	*stock_elements(t_list	*stack_a, int ac, char **av);
#endif
