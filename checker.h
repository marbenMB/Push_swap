/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 02:37:04 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/04/27 02:37:13 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

//	***********	Includes :
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <string.h>
# include <limits.h>
# include "./libft/libft.h"
# include "push_swap.h"
# include "./Get_Next_Line_Proj/get_next_line.h"

//	FUNCTIONS	***********	:
//	***********	Checker functions :
void	read_instraction(t_list **stack_a, t_list **stack_b);
void	checker(int ac, char **av);
#endif
